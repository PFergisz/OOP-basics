#include "Car.h"

Car::Car(std::string name, const int year, const int mileage):_name(name), _year(year), _ptr_mileage(new int(mileage)){}

void Car::displayInfo() const{
    if(_ptr_mileage)
        std::cout << "Brand: " << _name << ", Year: " << _year << ", Mileage: " << *_ptr_mileage << " km" <<std::endl;
    else
        std::cout << "Brand: ?, Year: ?, Mileage: ? km" <<std::endl;
    
}

Car::Car(const Car& other):_name(other._name), _year(other._year), _ptr_mileage(new int(*other._ptr_mileage)){}

Car::Car(Car&& other): _name(std::move(other._name)), _year(other._year), _ptr_mileage(new int(*other._ptr_mileage)){
    other._name.clear();
    other._year=0;
    delete other._ptr_mileage;
    other._ptr_mileage=nullptr;
}

Car::~Car(){
    delete _ptr_mileage;
    _ptr_mileage=nullptr;
}

Car& Car::operator=(Car&& other){
    if(&other!=this){
        delete _ptr_mileage;
        _ptr_mileage=new int(*other._ptr_mileage);
        _name=std::move(other._name);
        _year=other._year;
        
        delete other._ptr_mileage;
        other._ptr_mileage=nullptr;
        other._year=0;
    }

    return *this;
}

Car& Car::operator=(const Car& other){
    if(&other!=this){
        delete _ptr_mileage;
        _ptr_mileage=new int(*other._ptr_mileage);
        _name=std::move(other._name);
        _year=other._year;
    }

    return *this;
}
