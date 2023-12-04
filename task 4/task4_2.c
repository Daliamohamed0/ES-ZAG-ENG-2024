#include <stdio.h>
main()
{
    int num;
    char x;
  printf("enter the number :");
  scanf("%d",&num);

  printf("enter the character :");
  scanf(" %c",&x);

  if(num%2==0)

    printf("Result :%c ",x);
  else{
       if (x >= 'a' && x <= 'z') {
            printf("Result: %c\n", x - 'a' + 'A');
        } else if (x >= 'A' && x <= 'Z') {
            printf("Result: %c\n", x - 'A' + 'a');
        } else {
            printf("Invalid character.\n");
        }
  }






}
