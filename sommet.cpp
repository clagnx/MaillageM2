#include<sommet.h>

Sommet::Sommet(){

}

Sommet::Sommet(Face *f, Point *p){
    this->faceAdjacente = f;
    this->PointAdjacent = p;
}

void Sommet::setFaceAdjacente(Face *f){
    faceAdjacente = f;
}

Face* Sommet::getFaceAdjacente(){
    return this->faceAdjacente;
}
