#include <mesh.h>


Mesh::Mesh(){
    //vectFace = new std::vector<Face>();
}

void Mesh::addFace(Face f){
    vectFace.push_back(f);
}
