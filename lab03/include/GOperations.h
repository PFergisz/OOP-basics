#ifndef GOperations_h
#define GOperations_h
#include "GSeries.h"

typedef float (*operacja)(const ciag, rozmiarCiagu rozmiar);

float Suma(const ciag, const rozmiarCiagu);
float Srednia(const ciag, const rozmiarCiagu);
float Wykonaj(operacja, const ciag, const rozmiarCiagu);

#endif