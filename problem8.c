//Area of a CIrcle

#include <stdio.h>

int main() {
    int Pi = 3.1416;
    float radius, area;

   
    printf("Enter  radius of the circle: ");
    scanf("%f", &radius);

    area = Pi * radius * radius;

    printf("The area  %.2f\n", area);

    return 0;
}
