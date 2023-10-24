#include<stdio.h>
typedef struct _triangle {
    float base, altitude, area;
}Triangle;

Triangle input_triangle()
{
    Triangle t;
    printf("Enter the base of the triangle:");
    scanf("%f", &t.base);
    printf("Enter the altitude of the triangle :");
    scanf("%f",&t.altitude);
    return t;
}
void find_area