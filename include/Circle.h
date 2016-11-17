#ifndef CIRCLE_H
#define CIRCLE_H


class Circle: public Shape
{
    public:
        Circle(double r);
        virtual double circumference();
        virtual double area();
        virtual ~Circle();

    protected:

    private:
        double rVal;
};

#endif // CIRCLE_H
