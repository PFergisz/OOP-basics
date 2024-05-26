#include "Angle.h"

void Angle::remake(){
    while(_angle>2*M_PI)
        _angle-=2*M_PI;
    while(_angle<0)
        _angle+=2*M_PI;
}

void Angle::print() const{
    std::cout << "Angle [rad]: " << _angle << std::endl;
}


Angle::Angle(){
    _angle=0.0;
}

Angle::Angle(double angle){
    _angle=angle;
}

Angle& Angle::add(const Angle& angle){
    _angle+=angle._angle;
    remake();
    return *this;
}

Angle Angle::fromRadians(const double angle){
    std::cout << "... creating angle from radians." <<std::endl;
    Angle new_angle;
    new_angle._angle=angle;
    new_angle.remake();
    return new_angle;
}

Angle Angle::fromDegrees(const double angle){
    std::cout << "... creating angle from degrees." <<std::endl;
    angle=angle*2*M_PI/360;
    Angle new_angle;
    new_angle._angle=angle;
    new_angle.remake();
    return new_angle;
}

double Angle::toDeg() const{
    double angle = _angle*360/(2*M_PI);
    return angle;
}

