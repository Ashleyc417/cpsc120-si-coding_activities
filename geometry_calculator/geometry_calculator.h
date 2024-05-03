#ifndef GEOMETRY_CALCULATOR_H
#define GEOMETRY_CALCULATOR_H

/**
 * This is a header file for geometry_calculator.cpp
 * A header file is used to quickly reference functions/code you'll be
 * implementing in your .cpp or .cc file.
 */

// This function computes the area of a rectangles.
// Formula = length x width
double calculateRectangleArea(double length, double width);

// This function calculates the circumference of a circle.
// Formula = pi(r)^2
double calculateCircleCircumference(double radius);

// This function calculates the perimeter of a triangle.
// Formula = side1 + side2 + side3
double calculateTrianglePerimeter(double side1, double side2, double side3);

// This function calculates the quotient and remainder when using division.
void calculateQuotientAndRemainder(int dividend, int divisor);

#endif // GEOMETRY_CALCULATOR_H
