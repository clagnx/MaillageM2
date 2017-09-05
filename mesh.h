#ifndef MESH
#define MESH

#include <face.h>
#include <vector>

#define NUMBERFACES 56

class Mesh {
    public:
        Mesh();
        void addFace(Face f);
        void draw();
    private:
        std::vector<Face> vectFace;
};

#endif // MESH

