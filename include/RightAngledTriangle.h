#ifndef RIGHTANGLEDTRIANGLE_H
#define RIGHTANGLEDTRIANGLE_H

class RightAngledTriangle: public Shape
{
public:
    RightAngledTriangle(double x, double y, double h);
    virtual double circumference();
    virtual double area();
    virtual ~RightAngledTriangle();

protected:

private:
    double xVal;
    double yVal;
    double hVal;
};

#endif // RIGHTANGLEDTRIANGLE_H
