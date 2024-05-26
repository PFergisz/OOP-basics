#include "CplxVector.h"

CplxVector::CplxVector():_vector({CplxNumber(), CplxNumber(), CplxNumber()}){};

CplxVector::CplxVector(double x):_vector({CplxNumber(x,x), CplxNumber(x,x), CplxNumber(x,x)}){};

CplxVector& CplxVector::SetX(const double x, const double y){
    _vector[0]._Re=x;
    _vector[0]._Im=y;
    return *this;
}

CplxVector& CplxVector::SetX(const CplxNumber& x){
    _vector[0]=CplxNumber(x);
    return *this;
}

CplxVector& CplxVector::SetY(const double x, const double y){
    _vector[1]._Re=x;
    _vector[1]._Im=y;
    return *this;
}

CplxVector& CplxVector::SetZ(const double x, const double y){
    _vector[2]._Re=x;
    _vector[2]._Im=y;
    return *this;
}

const CplxNumber CplxVector::X() const{
    return _vector[0];
}
CplxNumber CplxVector::Y(){
    return _vector[1];
}
CplxNumber CplxVector::Z(){
    return _vector[2];
}

void CplxVector::Print() const{
std::cout << "[" << std::string(_vector[0]) << ", " << std::string(_vector[1]) << ", " << std::string(_vector[2]) << "]"<< std::endl;
}
