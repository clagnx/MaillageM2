#include<sommet.h>

Sommet::Sommet(){

}

Sommet::Sommet(Face *f, Point *p){
    this->faceAdjacente = new Face(f->getTabPoint());
    this->PointAdjacent = p;
}

void Sommet::setFaceAdjacente(Face *f){
    faceAdjacente = new Face(f->getTabPoint());
}

Face* Sommet::getFaceAdjacente(){
    return this->faceAdjacente;
}

Point * Sommet::getpoint(){
    return this->PointAdjacent;
}
