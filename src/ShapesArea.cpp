#include <vector>
#include "Shape.h"
#include "Rectangle.h"
#include "RightAngledTriangle.h"
#include "Circle.h"
#include "ShapesArea.h"
using namespace std;
/**
 * Total area of multiple shapes (not only triangles and rectangles but also
 * other types of shapes that implement #area).
 *
 * @param shapes The shapes to calculate the total area of.
 */
ShapesArea::ShapesArea(std::vector<Shape*> shapes)
{
    saShapes = shapes;
}

ShapesArea::~ShapesArea()
{
}

/**
 * To find the area of all the shapes supplied to the constructor.
 *
 * @return The area unit square measurement.
 */
double ShapesArea::area()
{
    double area = 0.0;
    for (std::vector<Shape*>::iterator it = saShapes.begin() ; it != saShapes.end(); ++it)
    {
        area += (*it)->area();
    }
    return area;
}
