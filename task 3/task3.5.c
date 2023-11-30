#include<stdio.h>
int main()
{
    int num, z=1 ;
    printf("Enter a number:");
    scanf("%d",&num);
    int i=1;
    while(i<=num)
    {
        z*=i;
        i++;
    }
    printf("5!=%d",z);

    return 0;
}
