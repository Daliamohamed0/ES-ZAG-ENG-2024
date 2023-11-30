#include<stdio.h>
int main()
{
    int x,y=1;
    printf("enter the number of rows of Floyd's triangle to print:");
    scanf("%d",&x);

    for(int i=1;i<=x;i++)
    {
       for(int j=1;j<=i;j++)
       {
           printf("%d",y);
           y++;
       }
       printf("\n");
    }

    return 0;
}
