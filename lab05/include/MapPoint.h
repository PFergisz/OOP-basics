#ifndef MAPPOINT_H
#define MAPPOINT_H

#include <iostream>
#include <cmath>

//deklaracja klasy MapPoint
class MapPoint{
    public:
        //domyslny konstruktor
        MapPoint() = default;
        //konstrukt z szerokoscia i dlugoscia jako parametrami
        MapPoint(double latitude, double longitude);

        //metoda przypisujaca do miasta szerokosc i dlugosc geograficzna
        void set_coordinates(double latitude, double longitude);
        //metoda wypisujaca szerokosc i dlugosc geograficzna
        void print() const;
        //metoda liczaca odleglosc
        double distanceVal(const MapPoint& name) const;
        //metoda liczaca odleglosc, przyjmujaca wskaznik
        double distanceVal(const MapPoint* name) const;

    private:
        //prywatna zmienna okreslajaca szerokosc geograficzna
        double _latitude = 0;
        //prywatna zmienna okreslajaca dlugosc geograficzna
        double _longitude = 0;
};

#endif