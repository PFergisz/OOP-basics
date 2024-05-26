#ifndef ANGLE_H
#define ANGLE_H

#include <iostream>
#include <cmath>

class Angle{
    public:
        //metoda wypisujaca wartosc kata w radianach
        void print() const;
        
        //metoda dodajaca do siebie katy (w radianach)
        Angle& add(const Angle& angle);
        
        //metody zamieniajaca wartosc kata z radianow na stopnie
        double toDeg() const;
    
        //metoda dodajaca nowy obiekt z liczby oznaczajacej radiany
        static Angle fromRadians(const double angle);
        //metoda dodajaca nowy obiekt z liczby oznaczajacej stopnie
        static Angle fromDegrees(const double angle);
    
        void remake();
    
    private:
        //prywatna zmienna _angle
        double _angle;
        //konstruktor domyslny
        Angle();
        //konstruktor przyjmujacy wartosc typu double
        Angle(double angle);
};

#endif