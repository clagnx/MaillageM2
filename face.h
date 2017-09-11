#ifndef FACE
#define FACE
#include <point.h>
#include <vector>


class Face{
public:
    Face();
    Face(int nombrePoints);
    Face(std::vector<unsigned int> vectorPointsToCopy);
    Face operator=(Face f);


    unsigned int getPoint(int index);
    std::vector<unsigned int> getTabPoint();
    void draw();

    int getNombrePoints();
    void setFaceAdjacente(unsigned int i);
    std::vector<unsigned int> getFaceAdjacente();

private:
    int nombrePoints;
    std::vector<unsigned int> IndPoint;
    std::vector<unsigned int> IndFaceAdjacente;
};

#endif // FACES


