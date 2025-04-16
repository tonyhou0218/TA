#include <iostream>
#include <cmath> 
using namespace std;

class Cylinder
{
private:
    int radius;
    int height;
public:
    Cylinder(int r, int h){
        radius = r;
        height = h;
    }
    void SurfaceArea();
    void Volume();
    void Circumference();
};



