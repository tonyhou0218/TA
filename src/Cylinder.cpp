# include "../inc/Cylinder.h"

double Cylinder :: SurfaceArea(){
    double ring = 2 * M_PI * radius;
    double SurfaceArea = ring * height + M_PI * radius * radius * 2;
    return SurfaceArea;
}

double Cylinder :: Volume(){
    double area = M_PI * radius * radius;
    double Volume = area * height;
    return Volume;
}

double Cylinder :: Circumference(){
    double ring = 2 * M_PI * radius;
    double Circumference = 2 * ring;
    return Circumference;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << "Circumference: " << fixed << std::setprecision(3) << cldr.Circumference() << endl;
    out << "SurfaceArea: " << fixed << std::setprecision(3) << cldr.SurfaceArea() << endl;
    out << "Volume: " << fixed << std::setprecision(3) << cldr.Volume() << endl;
    return out;
}