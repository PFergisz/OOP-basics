#ifndef GSERIES_H
#define GSERIES_H

#include <iostream>

typedef int rozmiarCiagu;
typedef float* ciag;

extern ciag geometryczny;

//Funkcja, w ktorej tworzona jest tablica zawierajaca elementy
//ciagu geometrycznego. Jezeli tablica juz istnieje, to jest
//ona usuwana i tworzona od nowa
ciag InicjalizujCiagGeometryczny(rozmiarCiagu, float, float);

//Procedura wypisujaca elementy ciagu
void Wypisz(const ciag, rozmiarCiagu);

//Procedura usuwajaca istniejace tablice zawierajace ciagi geometryczne
void UsunCiagi();

#endif