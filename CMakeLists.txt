cmake_minimum_required(VERSION 3.20)
project(datos2_tareaec1)

set(CMAKE_CXX_STANDARD 14)

add_executable(paged-sort main.cpp QuickSort.cpp QuickSort.h FileExtraction.cpp FileExtraction.h PagedArray.cpp PagedArray.h IntPage.cpp IntPage.h CreateInitialFile.cpp CreateInitialFile.h)
