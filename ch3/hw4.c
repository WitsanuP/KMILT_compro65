#include<stdio.h>

int main (){
    float diameter=12742;
    float radius;
    radius=diameter/2;
    float pi=3.1415926535897932384626433;

    printf("The world has 12742.00 km of diameter, \n");
    printf("%.2f km ofcircumference,",pi*diameter);
    printf("\n%.2f km^2 of area,",pi*radius*radius);
    printf("\n%.2f km^3 of volume,",4.0/3*pi*radius*radius*radius);
    printf("\nand %.2fkm^2 of surface area.",4*pi*radius*radius);
    return 0;
}