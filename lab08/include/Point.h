#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>
#include <array>
#include <iomanip>

class VPointCloud;

class Point3D {
    friend class VPointCloud;
public:
    Point3D();
    Point3D(const double);
    Point3D(const std::array <double,3> &coordinates);

    void displayCoordinates() const;
    static int DISPLAY_PRESITION;

    // explicit operator double() const;
    // operator std::string() const;

    // static std::string to_string(const Point3D& point);

private:
    std::array<double, 3> _coordinates;
};

#endif
