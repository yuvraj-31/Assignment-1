#include <stdio.h>

int main()
{
    float r;                              //here r is radius of circle
    printf("Enter the radius of circle\n");
    scanf("%f",&r);
    float Area = 3.14*(r*r);              //using formula for the area of the circle 
    printf("Area of the circle %0.3f having the Radius %0.3f ",Area,r);
    
    return 0;
}
