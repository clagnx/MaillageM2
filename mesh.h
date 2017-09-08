#ifndef MESH
#define MESH

#include <face.h>
#include <vector>
#include <iostream>
#include<sommet.h>
#include<iterator>

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
    private:
        std::vector<Face> vectFace;
        std::vector<Sommet *> vectSommet;
};

#endif // MESH

