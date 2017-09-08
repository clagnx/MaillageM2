#ifndef FACE
#define FACE
#include <point.h>
#include <vector>


class Face{
public:
    Face();
    Face(int nombrePoints);
    Face(std::vector<Point*> vectorPointsToCopy);
    Face operator=(Face f);


    Point* getPoint(int index);
    std::vector<Point*> getTabPoint();
    void draw();

    int getNombrePoints();
    void setFaceAdjacente(Face * f);
    Face * getFaceAdjacente();

private:
    int nombrePoints;
    std::vector<Point* > vectorPoint;
    Face * FaceAdjacente;
};

#endif // FACES


