#ifndef POINTCLOUD_H
#define POINTCLOUD_H

#include <iostream>
#include <array>
#include <vector>

class APointCloud;
class VPointCloud;

class Point3D {
    friend class APointCloud;
    friend class VPointCloud;
public:
    Point3D();
    Point3D(std::array<double, 3> coordinates);
    void displayCoordinates() const;
private:
    std::array<double, 3> _coordinates;
};

class APointCloud {
friend class VPointCloud;
public:
    APointCloud();
    ~APointCloud();

    void addPoint(const Point3D& point);
    void displayPoints() const;
    Point3D geoCentre() const;
    
private:
    Point3D* _vector=nullptr;
    int _size=0;
};

class VPointCloud {
public:
    void addPoint(const Point3D& point);
    void add(const APointCloud& aPointCloud);
    int count() const;
    Point3D geoCentre() const;

private:
    std::vector<Point3D> _vector;
};

#endif