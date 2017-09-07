#include <mesh.h>
#include <GL/gl.h>
#include <cstdlib>
#include <time.h>
#include <string>
#include <fstream>
#include <vector>
#include <iostream>



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

Mesh::Mesh(const char* c){
    std::ifstream fichier(c, std::ios::in);
    unsigned int nbsom, nbface, normals;
    float x,y,z;
    std::vector<Point*> vecpoint;
    if(!fichier)
    {
        std::cerr << "Can not open " << c << " !" << std::endl;
        exit(1);
    }

    std::string contenu;
    fichier >> contenu;

    // details du maillage
    fichier >> nbsom >> nbface >> normals;

    // chargement des vertex
    for(unsigned int i = 0; i < nbsom ; i++)
    {
        fichier >> x >> y >> z;
        vecpoint.push_back(new Point(x,y,z));
    }

    fichier.close();

//    std::cout << vecpoint(0)->getX() << std::endl;
//    for(unsigned int i = 0; i < vecpoint.size()-2;i++){
//        //vectFace.push_back(Face(vecpoint(i),vecpoint(i+1),vecpoint(i+2)));
//    }

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

