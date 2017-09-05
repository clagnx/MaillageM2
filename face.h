#ifndef FACE
#define FACE
#include <point.h>


class Face{
public:
    Face();
    Face(Point* p1, Point* p2, Point* p3);
    Face operator=(Face f);


    Point* getP1();
    Point* getP2();
    Point* getP3();
    void draw();

private:
    Point* p1;
    Point* p2;
    Point* p3;
};

#endif // FACES


