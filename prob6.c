#include <stdio.h>
#include <math.h>

double calculate_triangle_area(double a, double b, double c) {
    // Calculate the semi-perimeter
    double s = (a + b + c) / 2;

    // Use Heron's formula to calculate the area
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    return area;
}

int main() {
    double side1, side2, side3, area;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    // Check if the sides form a valid triangle
    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        area = calculate_triangle_area(side1, side2, side3);
        printf("The area of the triangle is: %.2lf\n", area);
    } else {
        printf("Error: The given sides do not form a valid triangle.\n");
    }

    return 0;
}