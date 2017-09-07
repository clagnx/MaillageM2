#include <mesh.h>
#include <GL/gl.h>
#include <cstdlib>
#include <time.h>




Mesh::Mesh(){
    //vectFace = new std::vector<Face>();
    Point* p1 = new Point(0.0, 0.0, 0.0);
    Point* p2 = new Point(1.0, 1.0, 0.0);
    Point* p3 = new Point(0.0, 1.0, 0.0);
    Point* p4 = new Point(1.0, 0.0, 0.0);
    std::vector<Point *> vect;
    vect.push_back(p1);
    vect.push_back(p3);
    vect.push_back(p2);
    vect.push_back(p4);

   std::cout<<"vect sozr : "<<vect.size()<<std::endl;
    Face* f = new Face(vect);
    vectFace.push_back(*f);
}

void Mesh::addFace(Face f){
    vectFace.push_back(f);
}

void Mesh::draw(){
    //glBegin(GL_POINTS);

    for(unsigned int i = 0; i < vectFace.size(); i++ ) {
        vectFace[i].draw();
    }

    //glEnd();

}

