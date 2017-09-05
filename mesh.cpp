#include <mesh.h>
#include <GL/gl.h>
#include <cstdlib>
#include <time.h>



Mesh::Mesh(){
    //vectFace = new std::vector<Face>();
    Face f = new Face(Point(0.0, 0.0, 0.0), Point(1.0, 1.0, 0.0), Point(2.0, 2.0, 0.0));
    vectFace.push_back(f);
}

void Mesh::addFace(Face f){
    vectFace.push_back(f);
}

void Mesh::draw(){
    glBegin(GL_POINTS);

    for( int i = 0; i < vector.size(); i++ ) {
        vectFace[i].draw();
    }

    glEnd();

}
