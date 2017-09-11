#ifndef MESH
#define MESH

#include <face.h>
#include <vector>
#include <iostream>
#include<sommet.h>
#include<iterator>
#include <point.h>

#define NUMBERFACES 56

class Mesh {
    public:
        Mesh();
        Mesh(const char* c);

      //  typedef Mesh::iterator iterator;
      // iterator begin();
      //  iterator end();
      //  iterator operator++();



        void addFace(Face f);
        void draw();
        void addSommet(Sommet* s);
        bool ifpointexist(unsigned int ind);

    private:
        std::vector<Face> vectFace;
        std::vector<Sommet> vectSommet;
        std::vector<Point> vectPoint;
};

#endif // MESH

