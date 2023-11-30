#include<stdio.h>
int main()
{
    int x[5];
    printf("enter 5 numbers:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }


    printf("the number that are divisible by 3:\n");
    for(int i=0;i<5;i++)
      {
         if(x[i]%3==0)
            printf("%d",x[i]);
            printf("\n");

      }

       return 0;
}
