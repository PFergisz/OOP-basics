#include "MapPoint.h"



MapPoint::MapPoint(double latitude, double longitude): _latitude(latitude), _longitude(longitude) {}

void MapPoint::print() const{
    std::cout << "Point: (" << _latitude << ", " << _longitude << ")" <<std::endl;
}

void MapPoint::set_coordinates(double latitude, double longitude){
    _latitude=latitude;
    _longitude=longitude;
}

double MapPoint::distanceVal(const MapPoint& name) const{
    double latitude = (_latitude-name._latitude)*(_latitude-name._latitude);
    double longitude = (_longitude-name._longitude)*(_longitude-name._longitude);

    double distance = sqrt(latitude+longitude);
    return distance;
}

double MapPoint::distanceVal(const MapPoint* name) const{
    double distance = distanceVal(*name);
    return distance;
}