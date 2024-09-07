//********************************************************
// fracturing.c
// Author: Juan Carlos Salinas Recio
// Class: COP 3223, Professor Parra
// Purpose: The purpose of this program is to practice writing and structuring code by creating multiple user-defined functions
// that perform specific calculations related to geometric properties of a circle.
// //********************************************************

// Header file for input output functions
#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
int main(int argc, char **argv);
double calculateDistance(double *x1, double *y1, double *x2, double *y2);
double calculatePerimeter(double diameter);
double calculateArea(double diameter);
double calculateWidth(double x1, double x2);
double calculateHeight(double y1, double y2);

// Main function that calls all required functions
/*
 * Input: None
 * Output: None
 * Preconditions: None
 * Postconditions: Calls all calculation functions and displays their results
 * Example use case: Complete assignment objectives in main
 */
int main(int argc, char **argv) {
    double x1, y1, x2, y2;
    printf("Enter coordinates for point 1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates for point 2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    double diameter = calculateDistance(&x1, &y1, &x2, &y2);
    double width = calculateWidth(x1, x2);
    double height = calculateHeight(y1, y2);
    double perimeter = calculatePerimeter(diameter);
    double area = calculateArea(diameter);

    return 0;
}

/*
 * Calculates the distance between two points, which is the diameter of the circle.
 * 
 * Input: 
 *  - x1: Pointer to the x-coordinate of the first point
 *  - y1: Pointer to the y-coordinate of the first point
 *  - x2: Pointer to the x-coordinate of the second point
 *  - y2: Pointer to the y-coordinate of the second point
 * 
 * Output: 
 *  - Prints the coordinates of the two points and the calculated diameter
 * 
 * Preconditions: Coordinates must be valid floating-point numbers
 * Postconditions: Calculates and prints the diameter of the circle
 
 */
double calculateDistance(double *x1, double *y1, double *x2, double *y2) {
    double distance = sqrt(pow(*x2 - *x1, 2) + pow(*y2 - *y1, 2));
    printf("Point #1 entered: x1 = %.0f; y1 = %.0f\n", *x1, *y1);
    printf("Point #2 entered: x2 = %.0f; y2 = %.0f\n", *x2, *y2);
    printf("The distance between the two points is %.6f\n", distance);

    return distance;
}

/*
 * Calculates the circumference (perimeter) of the circle based on the diameter.
 * 
 * Input: 
 *  - diameter: Diameter of the circle
 * 
 * Output: 
 *  - Prints the circumference of the circle
 * 
 * Preconditions: Diameter must be a valid floating-point number
 * Postconditions: Calculates and prints the circumference of the circle
 * Example use case: Given a diameter of 5.0, computes the circumference as 15.71
 */
double calculatePerimeter(double diameter) {
    double perimeter = PI * diameter;  // Circumference of the circle
    printf("The perimeter is %.6f\n", perimeter);

    return 3.5;  // difficulty level
}

/*
 * Calculates the area of the circle based on the diameter.
 * 
 * Input: 
 *  - diameter: Diameter of the circle
 * 
 * Output: 
 *  - Prints the area of the circle
 * 
 * Preconditions: Diameter must be a valid floating-point number
 * Postconditions: Calculates and prints the area of the circle
 * Example use case: Given a diameter of 5.0, computes the area as 19.63
 */
double calculateArea(double diameter) {
    double radius = diameter / 2.0;
    double area = PI * radius * radius;  // Area of the circle
    printf("The area is %.6f\n", area);

    return 4.0;  // difficulty level
}

/*
 * Calculates the width of the circle (same as the diameter).
 * 
 * Input: 
 *  - x1: x-coordinate of the first point
 *  - x2: x-coordinate of the second point
 * 
 * Output: 
 *  - Prints the width (diameter) of the circle
 * 
 * Preconditions: Coordinates must be valid floating-point numbers
 * Postconditions: Calculates and prints the diameter (width) of the circle
 * Example use case: Given x-coordinates 1.0 and 4.0, computes the width as 3.0
 */
double calculateWidth(double x1, double x2) {
    double width = fabs(x2 - x1);  // This is actually the diameter
    printf("The width is %.6f\n", width);

    return 2.5;  // Example difficulty level
}

/*
 * Calculates the height of the circle (same as the diameter).
 * 
 * Input: 
 *  - y1: y-coordinate of the first point
 *  - y2: y-coordinate of the second point
 * 
 * Output: 
 *  - Prints the height (diameter) of the circle
 * 
 * Preconditions: Coordinates must be valid floating-point numbers
 * Postconditions: Calculates and prints the diameter (height) of the circle
 * Example use case: Given y-coordinates 2.0 and 6.0, computes the height as 4.0
 */
double calculateHeight(double y1, double y2) {
    double height = fabs(y2 - y1);
    printf("The height is %.6f\n", height);

    return 3.0;  // difficulty level
}