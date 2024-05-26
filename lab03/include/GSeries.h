#ifndef GSERIES_H
#define GSERIES_H

#include <iostream>

typedef int rozmiarCiagu;
typedef float* ciag;

extern ciag geometryczny;

ciag InicjalizujCiagGeometryczny(const rozmiarCiagu, float);
void Wypisz(const ciag, const rozmiarCiagu);
void UsunCiagi();

#endif




