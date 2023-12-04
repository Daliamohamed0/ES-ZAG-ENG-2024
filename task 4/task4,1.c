#include <stdio.h>
main()
{
  int num, reversedNumber=0;
  printf("enter the number :");
  scanf("%d",&num);

  while (num != 0) {
        int remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversedNumber);

    return 0;


}
