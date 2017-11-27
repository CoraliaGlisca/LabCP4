#include <stdio.h>

int addition(int,int,int);
int product(int,int,int);
int average(int,int,int);

void main()
{
    int a,b,c,s,p,m;


    printf("\n Input the values for a, b, c = ");
    scanf("%d %d %d",&a,&b,&c);

    s=addition(a,b,c);
    printf("\n The addition of %d,%d and %d is = %d",a,b,c,s);


    p=product(a,b,c);
    printf("\n The product of  %d,%d and %d is = %d",a,b,c,p);


    m=average(a,b,c);
    printf("\n The average of %d,%d and %d is = %d",a,b,c,m);
    printf("\n");

}
int addition(int x,int y,int z)
{
    int s;
    s=x+y+z;
    return(s);
}
int product(int x,int y,int z)
{
    int p;
    p=x*y*z;
    return(p);
}
int average(int x,int y,int z)
{
    int a;
    a=(x+y+z)/3;
    return(a);
}
