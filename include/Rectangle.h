#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle: public Shape
{
public:
    Rectangle(double x, double y);
    virtual ~Rectangle();
    virtual double circumference();
    virtual double area();

protected:

private:
    double xVal;
    double yVal;
};

#endif // RECTANGLE_H
