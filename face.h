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

private:
    int nombrePoints;
    std::vector<Point* > vectorPoint;
   // Point* tabPoints[];
   /* Point* p1;
    Point* p2;
    Point* p3;*/
};

#endif // FACES


