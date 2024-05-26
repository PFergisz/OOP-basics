#include "GSeries.h"
#include "GOperations.h"

float Suma(const ciag geometryczny, const rozmiarCiagu rozmiar){
    float suma = 0.0;
    for(int i=0; i<rozmiar; i++){
        suma += geometryczny[i];
    }
    return suma;
}
float Srednia(const ciag geometryczny, const rozmiarCiagu rozmiar){
    float suma = Suma(geometryczny, rozmiar);
    return static_cast<float>(suma)/rozmiar;
}

float Wykonaj(operacja op, const ciag geometryczny, const rozmiarCiagu rozmiar){
    return op(geometryczny, rozmiar);
}