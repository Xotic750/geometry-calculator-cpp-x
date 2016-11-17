#include "Shape.h"
#include "RightAngledTriangle.h"

/**
 * A right triangle (American English) or right-angled triangle (British
 * English) is a triangle in which one angle is a right angle (that is, a
 * 90-degree angle). The relation between the sides and angles of a right
 * triangle is the basis for trigonometry.
 *
 * @param x The base unit distance measurement.
 * @param y The height unit distance measurement.
 * @param h The hypotenuse unit distance measurement.
 */
RightAngledTriangle::RightAngledTriangle(double x, double y, double h): Shape()
{
    xVal = x;
    yVal = y;
    hVal = h;
}

RightAngledTriangle::~RightAngledTriangle()
{
}

/**
 * The circumference of a right angled triangle is the sum of the three side
 * lengths.
 * <pre>Circumference = x + y + h</pre>
 *
 * @return The circumference unit distance measurement.
 */
double RightAngledTriangle::circumference()
{
    return xVal + yVal + hVal;
}

/**
 * The area is given by the area formula for an arbitrary triangle.
 * <pre>Area = (1 / 2) * B * h</pre> If the triangle is right angled, as in
 * this case, the side y is the same as the height an y is the same as the
 * base line.
 * <pre>Area = (1 / 2) * y * x</pre>
 *
 * @return The area unit square measurement.
 */
double RightAngledTriangle::area()
{
    return (xVal * yVal) / 2;
}
