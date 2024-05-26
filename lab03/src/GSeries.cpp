#include "GSeries.h"

ciag geometryczny = nullptr;

ciag InicjalizujCiagGeometryczny(const rozmiarCiagu rozmiar, float iloraz){
    if (geometryczny) {
        delete[] geometryczny;
    }
    geometryczny=new float[rozmiar];
    geometryczny[0] = 1;
    for(int i=1; i<rozmiar; i++){
        geometryczny[i] = geometryczny[i-1] * iloraz;
    }
    return geometryczny;
}

void Wypisz(const ciag geometryczny, const rozmiarCiagu rozmiar){
    std::cout << "(";
    for(int i = 0; i < rozmiar; i++){
        std::cout << geometryczny[i];
        if(i < rozmiar - 1){
            std::cout << ", ";
        }
    }
    std::cout << ")\n";
}

void UsunCiagi(){
    if (geometryczny) {
        delete[] geometryczny;
        geometryczny = nullptr;
    }
}