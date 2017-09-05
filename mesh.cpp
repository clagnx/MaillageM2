#include <mesh.h>
#include <GL/gl.h>
#include <cstdlib>
#include <time.h>



Mesh::Mesh(){
    //vectFace = new std::vector<Face>();
    Point* p1 = new Point(0.0, 0.0, 0.0);
    Point* p2 = new Point(1.0, 1.0, 0.0);
    Point* p3 = new Point(2.0, 2.0, 0.0);
    Face* f = new Face(p1, p2, p3);
    vectFace.push_back(*f);
}

void Mesh::addFace(Face f){
    vectFace.push_back(f);
}

void Mesh::draw(){
    glBegin(GL_POINTS);

    for(unsigned int i = 0; i < vectFace.size(); i++ ) {
        vectFace[i].draw();
    }

    glEnd();

}
