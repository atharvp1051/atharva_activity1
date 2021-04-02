//WAP to find the sum of n fractions.
#include<stdio.h>
struct fraction
{
  int num;
  int denum;
};
typedef struct fraction frct;
frct
input ()
{
  frct f;
  printf ("Enter the numerator: ");
  scanf ("%d", &f.num);
  printf ("Enter the denominator: ");
  scanf ("%d", &f.denum);
  return f;
}

void
input_n (frct f1[], int *n)
{
  printf ("Enter the number of fractions: \n");
  scanf ("%d", n);
  printf ("Enter the values of the fraction\n");
  for (int i = 0; i < *n; i++)
    {
      f1[i] = input ();
    }

}

frct
sum (frct f1, frct f2)
{
  frct f3;
  f3.num = (f1.num * f2.denum) + (f2.num * f1.denum);
  f3.denum = f1.denum * f2.denum;
  int g = gcd (f3.num, f3.denum);
  f3.num = f3.num / g;
  f3.denum = f3.denum / g;
  return f3;
}

frct
sum_n (frct f1[], int n)
{
  frct f3;
  f3.num = 0;
  f3.denum = 1;
  for (int i = 0; i < n; i++)
    {
      f3 = sum (f1[i], f3);
    }
  return f3;
}

int
gcd (int a, int b)
{
  int i, gcd = 1, temp;
  if (a < b)
    {
      temp = a;
      a = b;
      b = temp;
    }
  if (a % b == 0)
    {
      return b;
    }

  for (i = b / 2; i >= 2; i--)
    {
      if (a % i == 0 && b % i == 0)
	return i;
    }
  return gcd;
}

void
output (frct f1[], frct f3, int n)
{
  printf ("The sum of ");
  for (int i = 0; i < n; i++)
    {
      if (i < n - 1)
	printf ("%d/%d + ", f1[i].num, f1[i].denum);
      else
	printf ("%d/%d", f1[i].num, f1[i].denum);
    }
  printf (" is %d/%d ", f3.num, f3.denum);
}

int
main ()
{
  frct f1[100], f3;
  int n;
  input_n (f1, &n);
  f3 = sum_n (f1, n);
  output (f1, f3, n);
  return 0;
}
