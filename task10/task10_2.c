#include<stdio.h>


 void fun(int n1 , int n2 , int *ad , int *sb);

int main(){

   int num1 ,num2 ,add ,sub ;

   printf("Enter two numbers: ");
   scanf("%d %d",&num1 ,&num2);

   fun(num1 ,num2 ,&add ,&sub);

   printf("summation =%d \n" ,add);
   printf("subtraction =%d \n" ,sub);

   return 0 ;
}


void fun(int n1 ,int n2 ,int *ad ,int *sb){

  *ad= n1 + n2 ;
  *sb= n1 - n2 ;

}
