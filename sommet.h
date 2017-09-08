#ifndef SOMMET
#define SOMMET

#include<face.h>
#include<point.h>

class Sommet {
public:
    Sommet();
    Sommet(Face *f, Point *p);

    void setFaceAdjacente(Face* f);
    Face* getFaceAdjacente();



    private:
        Face * faceAdjacente;
        Point* PointAdjacent;
};
#endif // SOMMET

