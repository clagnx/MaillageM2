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
    vectPoint.push_back(p1);
    vectPoint.push_back(p3);
    vectPoint.push_back(p2);
    vectPoint.push_back(p4);

   std::cout<<"vect sozr : "<<vect.size()<<std::endl;

    Face* f = new Face(vect);
    vectFace.push_back(*f);

    vectSommet.push_back(new Sommet(vectFace.size()-1, 1));
    vectSommet.push_back(new Sommet(vectFace.size()-1, 2));
    vectSommet.push_back(new Sommet(vectFace.size()-1, 3));
    vectSommet.push_back(new Sommet(vectFace.size()-1, 4));
}

Mesh::Mesh(const char* c){
    std::ifstream fichier(c, std::ios::in);
    unsigned int nbsom, nbface, normals;
    float x,y,z;
    std::vector<Point *> vecpoint;
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

    // chargement des faces
    for(unsigned int i = 0; i < nbface ; i++)
    {
        int nb, a, b, c, d;
        fichier >> nb;
        std::vector<Point *> vecadd;
        Face* f;
        switch (nb) {
        case 3:
            fichier >> a >> b >> c;
            vecadd.push_back(vecpoint[a]);
            vecadd.push_back(vecpoint[b]);
            vecadd.push_back(vecpoint[c]);
            f = new Face(vecadd);
            vectFace.push_back(*f);

            if(ifpointexist(vecpoint[a]) == -1){
                vectSommet.push_back(new Sommet(vectFace.size()-1, a));
            }
            if(ifpointexist(vecpoint[b]) == -1){
                vectSommet.push_back(new Sommet(vectFace.size()-1, b));
            }
            if(ifpointexist(vecpoint[c]) == -1){
                vectSommet.push_back(new Sommet(vectFace.size()-1, c));
            }

            break;
        case 4:
            fichier >> a >> b >> c >> d;
            vecadd.push_back(vecpoint[a]);
            vecadd.push_back(vecpoint[b]);
            vecadd.push_back(vecpoint[c]);
            vecadd.push_back(vecpoint[d]);
            f = new Face(vecadd);
            vectFace.push_back(*f);

            if(ifpointexist(vecpoint[a]) == -1){
                vectSommet.push_back(new Sommet(vectFace.size()-1, a));
            }
            if(ifpointexist(vecpoint[b]) == -1){
                vectSommet.push_back(new Sommet(vectFace.size()-1, b));
            }
            if(ifpointexist(vecpoint[c]) == -1){
                vectSommet.push_back(new Sommet(vectFace.size()-1, c));
            }
            if(ifpointexist(vecpoint[d]) == -1){
                vectSommet.push_back(new Sommet(vectFace.size()-1, d));
            }
            break;
        default:
            fichier >> a >> b >> c;
            vecadd.push_back(vecpoint[a]);
            vecadd.push_back(vecpoint[b]);
            vecadd.push_back(vecpoint[c]);
            f = new Face(vecadd);
            vectFace.push_back(*f);

            if(ifpointexist(vecpoint[a]) == -1){
                vectSommet.push_back(new Sommet(vectFace.size()-1, a));
            }
            if(ifpointexist(vecpoint[b]) == -1){
                vectSommet.push_back(new Sommet(vectFace.size()-1, b));
            }
            if(ifpointexist(vecpoint[c]) == -1){
                vectSommet.push_back(new Sommet(vectFace.size()-1, c));
            }
            break;
        }

    }

    fichier.close();

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

int Mesh::ifpointexist(Point *p){
    int ind = -1;
    for(unsigned int i=0; i < vectPoint.size(); i++){
        if(vectPoint[i] == p){
            ind = i;
        }
    }
    return ind;
}

