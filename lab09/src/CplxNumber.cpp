#include "CplxNumber.h"

CplxNumber::CplxNumber(): _Re(0), _Im(0){};

CplxNumber::CplxNumber(const double x, const double y): _Re(x), _Im(y){};

void CplxNumber::Print() const{
    std::cout << "(" << _Re << ", " << _Im << ")" << std::endl;
}

CplxNumber::operator std::string() const{
    return "(" + std::to_string(_Re) + "," + std::to_string(_Im) + ")";
}

double CplxNumber::Abs(const CplxNumber& point ){
    std::cout << std::fixed<<std::setprecision(1);
    return sqrt(point._Re*point._Re+point._Im*point._Im);
}

CplxNumber::operator double() const{
    return sqrt(_Re*_Re+_Im*_Im);
}