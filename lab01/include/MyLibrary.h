#ifndef MYLIBRARY_H
#define MYLIBRARY_H

#include <iostream>

// Deklaracja funkcji PrintName
void PrintName(const char* name) {
  std::cout << "[INFO]:: Name: " << name << std::endl;
}

// Deklaracja funkcji PrintInfo
void PrintInfo(const char* path) {
  std::cout << "[INFO]:: " << path << std::endl;
}



#endif


