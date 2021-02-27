//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include <math.h>
float xone();
float xtwo();
float yone();
float ytwo();
int main()
{
    float total_distance;
	float a=xone();
	float b=xtwo();
	float c=yone();
	float d=ytwo();
	total_distance = ((b-a)*(b-a))+((d-c)*(d-c));
	printf("Distance between the said points %f", sqrt(total_distance));
	return 0;
}
float xone()
{
    	float x1;
    	printf("Input x1 ");
	scanf("%f", &x1);
	return x1;
}
float xtwo()
{
    	float x2;
    	printf("Input x2  ");
    	scanf("%f", &x2);
	return x2;
}
float yone()
{
    	float y1;
   	 printf("Input y1  ");
	scanf("%f", &y1);
    	return y1;
}
float ytwo()
{
    	float y2;
    	printf("Input y2 ");
	scanf("%f", &y2);
	return y2;
}
