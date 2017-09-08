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

Face::Face(std::vector<Point*> vectorPointsToCopy){
    nombrePoints = vectorPointsToCopy.size();
    this->vectorPoint = vectorPointsToCopy;

}

int Face::getNombrePoints(){
    std::cout<<"get nombre point : "<<this->nombrePoints<<std::endl;
    return this->nombrePoints;
}

void Face::draw(){
    glBegin(GL_LINE_LOOP);

    //Dessin des trois vecteurs de la face

    for(int i = 0; i< nombrePoints; i ++){
        Point * p = getPoint(i);
        glVertex3f(p->getX(), p->getY(), p->getZ());
    }



    glEnd();
}

Point* Face::getPoint(int index){
    return vectorPoint[index];
}


std::vector<Point*> Face::getTabPoint(){
    return vectorPoint;
}


Face Face::operator=(Face f){
    return Face(f.getTabPoint());
}

void Face::setFaceAdjacente(Face *f){
    this->FaceAdjacente = f;
}


Face * Face::getFaceAdjacente(){
    return FaceAdjacente;
}



