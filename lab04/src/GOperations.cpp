#include "GSeries.h"
#include "GOperations.h"

float Suma(const ciag geometryczny, rozmiarCiagu rozmiar){
    //[BUG] brak inicjalizacji wartosci sumy
    float suma;
    //float suma=0.0;
    for(int i=0; i<rozmiar; i++){
        suma+=geometryczny[i];
    }
    return suma;
}
float Srednia(const ciag geometryczny, rozmiarCiagu rozmiar){
    float suma = Suma(geometryczny, rozmiar);
    return suma/rozmiar;
}

float Wykonaj(operacja op, const ciag geometryczny, rozmiarCiagu rozmiar){
    return op(geometryczny, rozmiar);
}
