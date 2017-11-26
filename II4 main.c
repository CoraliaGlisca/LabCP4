#include <stdio.h>

FindMinMax(int a[10],int *min,int *max)
{
    int i;
    max=-9999;
    min=9999;

    for(i=0;i<10;i++)
    {
        if(a[i]>max)
           {
               max=a[i];
           }
        else
        { if(a[i]<min)
              min=a[i];
        }
    }
}

int main()
{
    int i,a[10],min,max;

    for(i=0;i<10;i++)
    {
       printf("Enter the elements of a[%d]:", i+1);
       scanf("%d", &a[i]);
    }

    FindMinMax(a,min,max);

    printf("\nThe minimum is %d, whereas the maximum is %d", min, max);
}
