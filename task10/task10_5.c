#include<stdio.h>

double average(int arr[], int index);
double sum(int arr[], int index);

int main(){
   int n ;
  printf("Enter the index :");
  scanf("%d" ,&n);

  printf("Enter the array :");
  int x[n];
  for(int i=0 ;i<n ;i++){
    scanf("%d" ,&x[i]);

  }

    double avr = average(x ,n);
    printf("Array  average =%.6f\n" ,avr);

   return 0;
}



double sum(int arr[], int index) {
    if (index <= 0)
         return 0;

    return sum(arr, index - 1) + arr[index - 1];
}



double average(int arr[], int index) {
    double s = sum(arr, index);
    return s / index;
}
