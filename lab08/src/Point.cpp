#include "Point.h"

int Point3D::DISPLAY_PRESITION=2;

Point3D::Point3D(const std::array<double, 3>& coordinates) : _coordinates(coordinates) {}

Point3D::Point3D():Point3D({0,0,0}){}

Point3D::Point3D(const double number):Point3D({number,number,number}){};

void Point3D::displayCoordinates() const {
    std::cout << std::fixed<<std::setprecision(DISPLAY_PRESITION);
    std::cout << "(" << _coordinates[0] << ", " << _coordinates[1] << ", " << _coordinates[2] << ")" << std::endl;
}

// Point3D::operator double() const {
//     return std::sqrt(_coordinates[0] * _coordinates[0] + _coordinates[1] * _coordinates[1] + _coordinates[2] * _coordinates[2]);
// }

// Point3D::operator std::string() const {
//     return "(" + std::to_string(_coordinates[0]) + "," + std::to_string(_coordinates[1]) + "," + std::to_string(_coordinates[2]) + ")";
// }

// std::string Point3D::to_string(const Point3D& point) {
//     return static_cast<std::string>(point);
// }

