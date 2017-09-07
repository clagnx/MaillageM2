#ifndef MESH
#define MESH

#include <face.h>
#include <vector>
#include <string>

#define NUMBERFACES 56

class Mesh {
    public:
        Mesh();
        Mesh(const char* c);
        void addFace(Face f);
        void draw();
    private:
        std::vector<Face> vectFace;
};

#endif // MESH

