#include <point.h>

Point::Point(){

}

Point::Point(double x, double y, double z){
    this->x = x;
    this->y = y;
    this->z = z;
}


void Point::draw(){

}

double Point::getX(){
    return x;
}

double Point::getY(){
    return y;
}

double Point::getZ(){
    return z;
}


Point Point::operator=(Point p){
    return Point(p.getX(), p.getY(), p.getZ());
}
