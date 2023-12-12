#include<stdio.h>

int main ()
{
    int x[10];
    printf("Enter 10 values:");
    for(int i=0;i<10;i++)
        scanf("%d",&x[i]);

    int max =x[0];
    int min =x[0];

    for(int i=1;i<10;i++)
    {
        if(x[i]>max)
            max=x[i];
    }

     for(int i=1;i<10;i++)
    {
        if(x[i]<min)
            min=x[i];
    }

    printf("the max value is %d \n",max);
    printf("the min value is %d \n",min);

    return 0 ;
}
