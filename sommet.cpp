#include<sommet.h>

Sommet::Sommet(){

}

Sommet::Sommet(unsigned int indf, unsigned int indp){
    this->indFaceAdjacente = indf;
    this->indPointAdjacent = indp;
}

void Sommet::setFaceAdjacente(unsigned int indf){
    indFaceAdjacente = indf;
}

unsigned int Sommet::getFaceAdjacente(){
    return this->indFaceAdjacente;
}

unsigned int Sommet::getpoint(){
    return this->indPointAdjacent;
}
