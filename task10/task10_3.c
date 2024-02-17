#include<stdio.h>

int main(){

  int x=1 , y=2 ,z=3;
  int *p = &x;
  int *q = &y;
  int *r = &z;
  int *swap = NULL;


  printf("value of x = %d\n" ,x);
  printf("value of y = %d\n" ,y);
  printf("value of z = %d\n" ,z);
  printf("value of p = 0x%X\n" ,p);
  printf("value of q = 0x%X\n" ,q);
  printf("value of r = 0x%X\n" ,r);
  printf("value of *p = %d\n" ,*p);
  printf("value of *q = %d\n" ,*q);
  printf("value of *r = %d\n" ,*r);

  printf("-----------------------------\n");
  printf(" Swapping pointers\n");
  printf("-----------------------------\n");

  swap = r ;
  r = p ;
  p = q ;
  q = swap ;

  printf("value of x = %d\n" ,x);
  printf("value of y = %d\n" ,y);
  printf("value of z = %d\n" ,z);
  printf("value of p = 0x%X\n" ,p);
  printf("value of q = 0x%X\n" ,q);
  printf("value of r = 0x%X\n" ,r);
  printf("value of *p = %d\n" ,*p);
  printf("value of *q = %d\n" ,*q);
  printf("value of *r = %d\n" ,*r);

return 0;
}
