#ifndef SOMMET
#define SOMMET

#include<face.h>
#include<point.h>
#include<vector>

class Sommet {
public:
    Sommet();
    Sommet(unsigned int indf, unsigned int indp);

    void setFaceAdjacente(unsigned int indf);
    unsigned int getFaceAdjacente();
    unsigned int getpoint();



    private:
        unsigned int indFaceAdjacente;
        unsigned int indPointAdjacent;
};
#endif // SOMMET

