#include <stdio.h>
#include "circle.h"

int main() {
    double radius, area;
    
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = calculateArea(radius);
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}
