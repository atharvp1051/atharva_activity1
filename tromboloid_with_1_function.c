//Write a program to find vol of tromboloid
#include<stdio.h>
int main()
{
    float h,d,b,v;
    printf("Enter the Dimensions of tromboloid in format Height Depth Breadth");
    scanf("%f %f %f",&h,&d,&b);
    v=(0.333)*((h*d*b)+(d/b));
    printf("Volume is %f.",v);
    return 0;
}
