#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    float a, b, c, disc, root1, root2, real, img;
    printf("Enter coefficients a, b, c:\n");
    if (scanf("%f %f %f", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    if (a == 0) 
    {
        printf("Invalid input. Coefficient 'a' cannot be zero.\n");
        return 1;
    }

    disc = b * b - (4 * a * c);

    if (disc > 0) {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } 
    else if (disc == 0) 
    {
        root1 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } 
    else 
    {
        real = -b / (2 * a);
        img = sqrt(fabs(disc)) / (2 * a);
        printf("Roots are complex.\n");
        printf("Root 1 = %.2f + %.2fi\n", real, img);
        printf("Root 2 = %.2f - %.2fi\n", real, img);
    }

    return 0;
}

