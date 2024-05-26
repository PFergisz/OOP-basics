#ifndef CPLXNUMBER_H
#define CPLXNUMBER_H

#include <iostream>
#include <cmath>
#include <iomanip>

class CplxVector;

class CplxNumber{
    friend class CplxVector;
    public:
        //domyslny konstruktor
        CplxNumber();
        //konstruktor przyjmujacy jako argument dwie liczby typu double
        CplxNumber(const double, const double);
        //metoda wypisujaca wartosc liczb _Re i _Im
        void Print() const;
        //konwersja na liczbe typu double
        explicit operator double() const;
        //konwersja na string
        operator std::string() const;
        //zmienna statyczna Abs
        static double Abs(const CplxNumber&);

    private:
        double _Re;
        double _Im;
};

#endif