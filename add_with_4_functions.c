#include<stdio.h>
int n();
int m();
int sum(float,float);
int main()
{
	float x=n();
	float y=m();
	float z=sum(x,y);
	printf("The sum of the two number is : %f",z);
	return 0;
}
int n()
{
	float a;
	printf("Enter a number : ");
	scanf("%f",&a);
	return a;
}
int m()
{
	float b;
	printf("Enter a number : ");
	scanf("%f",&b);
	return b;
}
int sum(float c,float d)
{
	float f=c+d;
	return f;
}
