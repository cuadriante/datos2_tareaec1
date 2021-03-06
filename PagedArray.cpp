//
// Created by cuadriante on 21/8/21.
//

#include "PagedArray.h"


using namespace std;

PagedArray::PagedArray(string destFileName, int numberSize) {
    destinyFile.open(destFileName, ios::in | ios::out | ios::binary);
    digits = numberSize;
    destinyFile.seekg(0,ios::end);
    size = destinyFile.tellg()/(digits + 1);
}


PagedArray::~PagedArray() {
    while (loadedPages.size() > 0){
        delete loadedPages.at(0);
        loadedPages.erase(loadedPages.begin());
    }
    destinyFile.close();
}


void PagedArray::printContents(){
    destinyFile.flush();
    string line;
    int i = 0;
    getline(destinyFile, line);
    cout << "from destiny file: " << line << '\n';
}

int PagedArray::getSize(){
    return size;
}

int &PagedArray::operator[](int index) {
    int pageNumber = index/IntPage::pageSize;
    IntPage *page = searchForPage(pageNumber);
    int indexInPage = index % IntPage::pageSize;
    int* result = page->getElement(indexInPage);
    return *result;
}

//int PagedArray::operator[](int index) const { // para leer el dato
//    int pageNumber = index/IntPage::pageSize;
//    IntPage *page = searchForPage(pageNumber);
//    page->readFromFile(&destinyFile);
//    int indexInPage = index % IntPage::pageSize;
//    return page->getElement(indexInPage);
//    return 1;
//}

IntPage * PagedArray::searchForPage(int pageNumber) {
    IntPage* page;
    for (int i = 0; i < loadedPages.size(); ++i) {
        page = loadedPages.at(i);
        if (page->getPageNumber() == pageNumber) {
            return page;
        }
    }
    page = new IntPage(&destinyFile, pageNumber, digits);
    loadedPages.push_back(page); // se crea una pagina nueva si no existe en el vector
    if (loadedPages.size() > maxPages){
        delete loadedPages.at(0);
        loadedPages.erase(loadedPages.begin());
    }
    return page;
}







