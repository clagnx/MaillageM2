#include <face.h>
#include <GL/gl.h>
#include<iostream>

Face::Face(){
    this->p1 = new Point();
    this->p2 = new Point();
    this->p3 = new Point();
}

Face::Face(Point* p1, Point* p2, Point* p3){
    p1 = p1;
    p2 = p2;
    p3 = p3;
}

void Face::draw(){
    glBegin(GL_POINTS);

    std::cout<<getP1()->getX()<<std::endl;

    glVertex3f(getP1()->getX(), getP1()->getY(),  getP1()->getZ());
    glVertex3f(getP2()->getX(), getP2()->getY(),  getP2()->getZ());
    glVertex3f(getP3()-> getX(), getP3()-> getY(),  getP3()->getZ());

    glEnd();
}

Point* Face::getP1(){
    return p1;
}

Point* Face::getP2(){
    return p2;
}

Point* Face::getP3(){
    return p3;
}


Face Face::operator=(Face f){
    return Face(f.getP1(),f.getP2(), f.getP3() );
}



