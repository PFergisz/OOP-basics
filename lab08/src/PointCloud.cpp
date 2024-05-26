#include "PointCloud.h"

VPointCloud::~VPointCloud() {
        for (auto& point : _vector)
            delete point;
}

VPointCloud::VPointCloud(const VPointCloud& other) {
    for (const auto& point : other._vector) {
        _vector.push_back(new Point3D(*point));
    }
}

void VPointCloud::addPoint(Point3D* point) {
    if (point == nullptr) {
        point = new Point3D();
    }
    _vector.push_back(point);
}

void VPointCloud::addPoint(const std::array <double,3> point){
    Point3D* ptr=new Point3D(point);
    _vector.push_back(ptr);
}

void VPointCloud::displayPoints() const {
    for (const auto& point : _vector) {
        point->displayCoordinates();
    }
}

Point3D* VPointCloud::getCopyPoint(int i) const{
    return new Point3D(*_vector[i]);
}

void VPointCloud::add(const VPointCloud& other) {
    for(const auto& point: other._vector)
        _vector.push_back(new Point3D(*point));
}

VPointCloud::VPointCloud(VPointCloud&& other) noexcept: _vector(std::move(other._vector)) {
    other._vector.clear();
}

