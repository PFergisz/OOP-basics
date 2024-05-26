#ifndef POINTCLOUD_H
#define POINTCLOUD_H

#include <vector>
#include "Point.h"

class VPointCloud {
public:
    VPointCloud() = default;
    ~VPointCloud();
    VPointCloud(const VPointCloud& other);
    VPointCloud(VPointCloud&& other) noexcept;

    void addPoint(Point3D* point = nullptr);
    void addPoint(const std::array <double,3> element);

    void displayPoints() const;
    Point3D *getCopyPoint(int i) const; 

    void add(const VPointCloud& other);

private:
    std::vector<Point3D*> _vector;
};

#endif