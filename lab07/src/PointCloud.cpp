#include "PointCloud.h"

Point3D::Point3D(){
    for(auto& coord: _coordinates)
        coord=0.0;
}

Point3D::Point3D(std::array<double, 3> coordinates): _coordinates(coordinates) {}


void Point3D::displayCoordinates() const {
    std::cout << "(" << _coordinates[0] << ", " << _coordinates[1] << ", " << _coordinates[2] << ")" << std::endl;
}

APointCloud::APointCloud(): _vector(nullptr), _size(0) {}


APointCloud::~APointCloud() {
    delete[] _vector;
}

void APointCloud::addPoint(const Point3D& point) {
    Point3D* newPoints = new Point3D[_size + 1];
    for (int i = 0; i < _size; i++) {
        newPoints[i] = _vector[i];
    }

    newPoints[_size] = point;

    delete[] _vector;
    _vector = newPoints;
    _size++;
}

void APointCloud::displayPoints() const {
    std::cout << "Chmura punktów [APC]:" << std::endl;
    for (int i = 0; i < _size; i++) {
        _vector[i].displayCoordinates();
    }
}

Point3D APointCloud::geoCentre() const {
    double xSum = 0.0, ySum = 0.0, zSum = 0.0;
    for (int i = 0; i < _size; i++) {
        xSum += _vector[i]._coordinates[0];
        ySum += _vector[i]._coordinates[1];
        zSum += _vector[i]._coordinates[2];
    }

    return Point3D({xSum / _size, ySum / _size, zSum / _size});
}

void VPointCloud::addPoint(const Point3D& point) {
    _vector.push_back(point);
}

void VPointCloud::add(const APointCloud& aPointCloud) {
    for (int i = 0; i < aPointCloud._size; i++) {
        _vector.push_back(aPointCloud._vector[i]);
    }
}

int VPointCloud::count() const {
    return _vector.size();
}

Point3D VPointCloud::geoCentre() const {
    double xSum = 0.0, ySum = 0.0, zSum = 0.0;
    for(const auto& vector: _vector){
        xSum+=vector._coordinates[0];
        ySum+=vector._coordinates[1];
        zSum+=vector._coordinates[2];
    }

    return Point3D({xSum / _vector.size(), ySum / _vector.size(), zSum / _vector.size()});
}
