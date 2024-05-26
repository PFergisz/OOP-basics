#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <cstring>

class Car{
    public:
        //konstruktor przyjmujacy lancuch znakow i dwie zmienne typu int
        Car(std::string, const int, const int);
        //destruktor
        ~Car();
        //konstuktor kopiujacy
        Car(const Car&);
        //konstruktor przenoszacy
        Car(Car&&);
        //operator przypisania przenoszacego
        Car& operator=(Car&&);
        //operator przypisania kopiujacego
        Car& operator=(const Car&);
        //metoda wypisujaca element klasy
        void displayInfo() const;


    private:
        //lancuch znakow oznaczajacy marke samochodu
        std::string _name;
        //zmienna okreslajaca rok produkcji
        int _year;
        //wskaznik na zmienna oznaczajaca przebieg
        int* _ptr_mileage;
};






#endif