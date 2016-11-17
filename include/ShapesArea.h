#ifndef SHAPESAREA_H
#define SHAPESAREA_H


class ShapesArea
{
public:
    ShapesArea(std::vector<Shape*> shapes);
    virtual double area();
    virtual ~ShapesArea();

protected:

private:
    std::vector<Shape*> saShapes;
};

#endif // SHAPESAREA_H
