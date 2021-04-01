//WAP to find the sum of n fractions.
#include<stdio.h>
typedef struct frac
{
	int n,d;
}frac;
frac input_one()
{
	frac f;
printf("Enter the numerator and denominator:- ");
scanf("%d%d",&f.n,&f.d);
return f;
}
int nof()
{
	int n;
	printf("Enter the no of fractions :-");
	scanf("%d",&n);
	return n;
}
void input_n(int n , frac arr[n])
{
	for(int i = 0;i<n,i++)
		a[i]=input_one();
}
int gcd_calc(int x,int  y)
{
    int gcd =1;
    for (int i = 2; i<=x && i<=y;i++)
    {
        if (x%i==0 && y%i==0)
            gcd = i;
    }
    return gcd;
}
frac add(frac x, frac y)
{
    frac sum;
    sum.num = (x.num*y.denom)+(y.num*x.denom);
    sum.denom= x.denom*y.denom;
    int h=gcd_calc(sum.num,sum.denom);
    sum.num=sum.num/h;
    sum.denom=sum.denom/h;
 return sum;
}
frac add_n(int n, frac arr[n])
{
	frac temp;
	temp.n=0;
	temp.d=1;
	for(int i =0;i<n;i++)
	{
	temp = add(temp,arr[i]);
}
return temp;
}
int output(int n , frac b[n], frac sum)
{
	printf("The sum of fractions : - ");
	for(int i=0;i<n;i++)
	{
	printf("%d / %d",b[i].n,b[i].d);
}
printf("The sum is : - %d / %d " sum.n,sum.d);
}
int main()
{
	int nf= nof();	
	frac noff[nf];
	input_n(nf,noff);
	frac f_sum=  add_n(nf,noff);
	output(nf,noff,f_sum);
}
