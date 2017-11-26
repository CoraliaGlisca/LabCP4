#include <stdio.h>
#include <math.h>

int main()
{
	int n,b1,b2,nr=0,r,p=1;
    printf("Insert the number: ");
	scanf("%d", &n);

	scanf("%d", &b1);

	scanf("%d", &b2);

	while(n!=0)
    {
		r=n%10;
		n=n/10;
		nr=nr+r*p;
		p=p*b1;
	}
	printf("nr= %d", nr);

	n=nr;
    nr=0;
    r;
    p=1;

	while(n!=0)
    {
		r=n%b2;
		n=n/b2;
		nr=nr+r*p;
		p=p*10;
	}
	printf("\nnr= %d", nr);
}
