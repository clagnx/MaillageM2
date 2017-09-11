#include <face.h>
#include <GL/gl.h>
#include<iostream>

Face::Face(int nombrPoints){
    /*this->p1 = new Point();
    this->p2 = new Point();
    this->p3 = new Point();*/
    nombrePoints = nombrPoints;
    //Point * tab[nombrPoints];
    //tabPoints = tab;
}

Face::Face(std::vector<unsigned int> vectorPointsToCopy){
    nombrePoints = vectorPointsToCopy.size();
    this->IndPoint = vectorPointsToCopy;

}

int Face::getNombrePoints(){
    return this->nombrePoints;
}

void Face::draw(){
    glBegin(GL_LINE_LOOP);

    //Dessin des trois vecteurs de la face

//    for(int i = 0; i< nombrePoints; i ++){
//        Point * p = getPoint(i);
//        glVertex3f(p->getX(), p->getY(), p->getZ());
//    }



    glEnd();
}

unsigned int Face::getPoint(int index){
    return IndPoint[index];
}


std::vector<unsigned int> Face::getTabPoint(){
    return IndPoint;
}


Face Face::operator=(Face f){
    return Face(f.getTabPoint());
}

void Face::setFaceAdjacente(unsigned int ind){
    this->IndFaceAdjacente.push_back(ind);
}


std::vector<unsigned int> Face::getFaceAdjacente(){
    return IndFaceAdjacente;
}



