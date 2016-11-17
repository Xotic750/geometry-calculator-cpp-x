/**
 * @see <a href="https://gist.github.com/KristofferV/952493dfa53b1349e684c4fa2f203403">C.A.G Geometry Calculator</a>
 * @version 1.0.0
 * @author Xotic750 xotic750@gmail.com
 */

#include <vector>
#include <iostream>
#include <cassert>
#include <cmath>
#include <sstream>
#include "Shape.h"
#include "Rectangle.h"
#include "RightAngledTriangle.h"
#include "Circle.h"
#include "ShapesArea.h"

using namespace std;

std::string to2dp(double x)
{
    std::ostringstream strs;
    strs << roundf(x * 100) / 100;
    return strs.str();
}

int main()
{
    Shape *shape1 = new Circle(3);
    assert (to2dp(shape1->circumference())=="18.85");
    assert (to2dp(shape1->area())=="28.27");

    Shape *shape2 = new Rectangle(3, 4);
    assert (shape2->circumference()==14);
    assert (shape2->area()==12);

    Shape *shape3 = new RightAngledTriangle(3, 4, 5);
    assert (shape3->circumference()==12);
    assert (shape3->area()==6);

    std::vector<Shape*> shapes = std::vector<Shape*>();
    shapes.push_back(shape1);
    shapes.push_back(shape2);
    shapes.push_back(shape3);
    ShapesArea* shapesArea = new ShapesArea(shapes);
    assert (to2dp(shapesArea->area())=="46.27");

    cout << "All passed" << endl;

    return 0;
}
