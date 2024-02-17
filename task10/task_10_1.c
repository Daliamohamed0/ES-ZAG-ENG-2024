#include <stdio.h>


 unsigned int num =10;
 unsigned int *ptr =&num;

int main()
{
   printf("number=%i \n",num);
   *ptr=20;
   printf("number=%i \n",num);

    return 0;
}
