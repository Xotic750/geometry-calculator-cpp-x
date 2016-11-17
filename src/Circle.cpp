#include <cmath>
#include "Shape.h"
#include "Circle.h"

/**
 * A circle is a simple closed shape in Euclidean geometry. It is the set of
 * all points in a plane that are at a given distance from a given point,
 * the centre; equivalently it is the curve traced out by a point that moves
 * so that its distance from a given point is constant. The distance between
 * any of the points and the centre is called the radius.
 *
 * @param r The radius unit distance measurement.
 */
Circle::Circle(double r): Shape()
{
    rVal = r;
}

Circle::~Circle()
{
}

/**
 * The circumference of a circle relates to one of the most important
 * mathematical constants in all of mathematics.
 * <pre>Circumference = 2 * PI * r</pre>
 *
 * @return The circumference unit distance measurement.
 */
double Circle::circumference()
{
    return 2 * M_PI * rVal;
}

/**
 * To find the area of a circle.
 * <pre>Area = PI * (r^2)</pre>
 *
 * @return The area unit square measurement.
 */
double Circle::area()
{
    return M_PI * pow(rVal, 2);
}
