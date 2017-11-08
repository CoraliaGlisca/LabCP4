#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int function1( int a, int b, int c, int d, int x, int n, int y)
{
    y = a*pow(x,2*n) + b*pow(x,2) + c*x + d;
    return y;
}

int function2(int a, int b, int c, int x, int n, int y)
{
   y =  a*pow(x,2) + b*x + cos(PI*c);
   return y;
}

int main()
{
    int a,b,c,d,x,n,y;
    int y1,y2;

    printf("Enter a, b, c, d, x and n=");

    scanf("%d", &a);

    scanf("%d", &b);

    scanf("%d", &c);

    scanf("%d", &d);

    scanf("%d", &x);

    scanf("%i", &n);

    y1=function1(a,b,c,d,x,n,y);
    y2=function2(a,b,c,x,n,y);

    printf("y1= %d and y2= %d", y1, y2);

}
