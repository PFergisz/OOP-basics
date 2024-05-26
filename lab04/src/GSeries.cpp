#include "GSeries.h"

ciag geometryczny = nullptr;

ciag InicjalizujCiagGeometryczny(rozmiarCiagu rozmiar,float pierwszy, float iloraz){
    
    //[BUG] nie zwalniam pamieci przy realokacji pamieci tablicy
    //  if (geometryczny != nullptr) {
    //      delete[] geometryczny;
    //  }

    geometryczny=new float[rozmiar];
    geometryczny[0]=pierwszy;
    for(int i=1; i<rozmiar; i++){
        geometryczny[i]=geometryczny[i-1]*iloraz;
    }
    return geometryczny;
}

void Wypisz(const ciag geometryczny, rozmiarCiagu rozmiar){
    std::cout << "(";
    for(int i=0; i<rozmiar;i++){
        std::cout << geometryczny[i];
        if(i<rozmiar-1){
            std::cout << ", ";
        }
    }
    std::cout << ")\n";
}

void UsunCiagi(){
    //[BUG] calkowite pominiecie zwalniania pamieci

    /*
    //jesli jednak musi cos byc w tej procedurze:
    //[BUG] mozliwe zwalnianie pamieci przy nullptr
    delete[] geometryczny;
    //[BUG] dangling pointer
    geometryczny = nullptr;
    */

    //  //poprawna czesc kodu do zwalniania pamieci
    //  if (geometryczny != nullptr) {
    //      delete[] geometryczny;
    //      geometryczny = nullptr;
    //  }
}
