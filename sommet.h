#ifndef SOMMET
#define SOMMET

#include<face.h>
#include<point.h>
#include<vector>

class Sommet {
public:
    Sommet();
    Sommet(Face *f, Point *p);

    void setFaceAdjacente(Face* f);
    Face* getFaceAdjacente();
    Point * getpoint();



    private:
        Face * faceAdjacente;
        Point* PointAdjacent;
};
#endif // SOMMET

