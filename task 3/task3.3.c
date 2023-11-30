#include<stdio.h>
#include<math.h>
int main()

{
    float X , Y, Z ;
    printf("enter the number:");
    scanf("%f",&X);
    printf("enter the power:");
    scanf("%f",&Y);

    Z=pow(X,Y);
    printf("the result:%f",Z);
return 0;
}
