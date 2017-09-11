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

bool Point::operator==(Point p1){
    if(p1.getX()==getX() && p1.getY()==getY() && p1.getZ()==getZ()){
        return true;
    }else return false;
}

