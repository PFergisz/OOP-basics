#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include "Student.h"

//Funkcja wypisujaca elementy listy jednokierunkowej
void show(TStudent* head);

//Funkcja tworzaca pierwszy element listy jednokierunkowej
//zwracajaca wskaznik do niego
TStudent* InitTStudent();

//Funkcja dodajaca kolejne elementy na poczatek listy jednokierunkowej
//przenosi ona wskaznik poczatku listy na nowo dodany element
//i zwraca nowy wskaznik head 
TStudent* push_front(TStudent** head, int value);

//Funkcja czyszczaca wszystkie elementy listy jednokierunkowej
void clear(TStudent** head);

#endif



