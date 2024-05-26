#ifndef CPLXVECTOR_H
#define CPLXVECTOR_H

#include "CplxNumber.h"
#include <array>

class CplxVector{
    public:
        //konstruktor domyslny
        CplxVector();
        //konstruktor przyjmujacy liczbe typu double - konwersja
        CplxVector(double);
        
        //metoda przypisujaca elementowi _x wartosc CplxNumber
        CplxVector& SetX(const CplxNumber&);
        //metoda ustawiajaca wartosci _x, przyjmujaca dwie liczby typu double
        CplxVector& SetX(const double, const double);
        //metoda ustawiajaca wartosci _y, przyjmujaca dwie liczby typu double
        CplxVector& SetY(const double, const double);
        //metoda ustawiajaca wartosci _z, przyjmujaca dwie liczby typu double
        CplxVector& SetZ(const double, const double);
        //metoda wypisujaca zawartosc zmiennej _vector
        void Print() const;
        //metoda zwracajaca zmienna _x
        const CplxNumber X() const;
        //metoda zwracajaca zmienna _y
        CplxNumber Y();
        //metoda zwracajaca zmienna _z
        CplxNumber Z();

    private:
        // CplxNumber _x, _y, _z;
        std::array<CplxNumber, 3> _vector;
};



#endif 