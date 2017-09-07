#ifndef MESH
#define MESH

#include <face.h>
#include <vector>
#include <iostream>

#define NUMBERFACES 56

class Mesh {
    public:
        Mesh();
        //Mesh(string p);
        void addFace(Face f);
        void draw();
    private:
        std::vector<Face> vectFace;
};

#endif // MESH

