#ifndef GOperations_h
#define GOperations_h
#include "GSeries.h"

typedef float (*operacja)(const ciag, rozmiarCiagu rozmiar);

//Funkcja liczaca sume elementow tablicy
float Suma(const ciag geometryczny, rozmiarCiagu rozmiar);

//Funkcja liczaca srednia elementow tablicy 
float Srednia(const ciag geometryczny, rozmiarCiagu rozmiar);

//Funkcja do ktorej przekazywana jest tablica wskaznikow na funkcje, wykonujaca podane funkcje
float Wykonaj(operacja op, const ciag geometryczny, rozmiarCiagu rozmiar);

 #endif
