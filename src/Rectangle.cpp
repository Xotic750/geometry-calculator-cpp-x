#include "Shape.h"
#include "Rectangle.h"

/**
 * In Euclidean plane geometry, a rectangle is a quadrilateral with four
 * right angles. It can also be defined as an equiangular quadrilateral,
 * since equiangular means that all of its angles are equal. It can also be
 * defined as a parallelogram containing a right angle. A rectangle with
 * four sides of equal length is a square. The term oblong is occasionally
 * used to refer to a non-square rectangle.
 *
 * @param x The base unit distance measurement.
 * @param y The height unit distance measurement.
 */
Rectangle::Rectangle(double x, double y): Shape()
{
    xVal = x;
    yVal = y;
}

Rectangle::~Rectangle()
{
}

/**
 * The circumference of a rectangle is the sum of the two side lengths then
 * doubled.
 * <pre>Circumference = (x + y) * 2</pre>
 *
 * @return The circumference unit distance measurement.
 */
double Rectangle::circumference()
{
    return (xVal + yVal) * 2;
}

/**
 * To find the area of a rectangle, multiply the length by the width.
 * <pre>Area = x * y</pre>
 *
 * @return The area unit square measurement.
 */
double Rectangle::area()
{
    return xVal * yVal;
}
