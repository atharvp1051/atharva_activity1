//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float h();
float b();
float d();
float vol(float,float,float);
int main()
{
	float x=h();
	float y=b();
	float z=d();
	float h=vol(x,y,z);
	printf("The volume of the tromboloid is : %f",h);
}
float h()
{
	float a;
	printf("Enter the height : ");
	scanf("%f",&a);
	return a;
}
float b()
{
	float b;
	printf("Enter the breadth : ");
	scanf("%f",&b);
	return b;
}
float d()
{
	float c;
	printf("Enter the depth : ");
	scanf("%f",&c);
	return c;
}
float vol(float i,float j,float k)
{
	float f=(0.333)*((i*j*k)+(k/j));
	return f;
}

