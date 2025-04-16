#include "../inc/Cylinder.h"

void Cylinder :: SurfaceArea(){
    double ring = 2*M_PI*radius;
    double SurfaceArea = ring*height + M_PI*radius*radius*2;
    cout<<"SurfaceArea: "<< SurfaceArea<<endl;
}
void Cylinder :: Volume(){
    double area = M_PI*radius*radius;
    double Volume = area*height ;
    cout<<"Volume: "<<Volume<< endl;
}
void Cylinder :: Circumference(){
    double ring = 2*M_PI*radius;
    double Circumference = 2*ring;
    cout<<"Circumference: "<<Circumference<< endl;
}