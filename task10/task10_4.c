#include<stdio.h>

int main(){

  int num , x;
  printf("Enter the number :");
  scanf("%d" ,&num);
  x= factorial(num);
  printf("number  factorial =%d" ,x);
  return 0;
}

int factorial(int number){
 if(number==0){
    return 1;
 }
else{
    return (number*factorial(number-1));
}

}
