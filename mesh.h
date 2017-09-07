#ifndef MESH
#define MESH

#include <face.h>
#include <vector>
<<<<<<< HEAD
#include <string>
=======
#include <iostream>
>>>>>>> ab639764325521487d2c529a0bce0fdcd9e72afa

#define NUMBERFACES 56

class Mesh {
    public:
        Mesh();
<<<<<<< HEAD
        Mesh(const char* c);
=======
        //Mesh(string p);
>>>>>>> ab639764325521487d2c529a0bce0fdcd9e72afa
        void addFace(Face f);
        void draw();
    private:
        std::vector<Face> vectFace;
};

#endif // MESH

