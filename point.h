#ifndef POINT
#define POINT


class Point {
public:
    Point();
    Point(double x, double y, double z);


    Point operator=(Point p);
    bool operator==(Point p);
    void draw();
    double getX();
    double getY();
    double getZ();


private:
    double x;
    double y;
    double z;


};

#endif // POINT

