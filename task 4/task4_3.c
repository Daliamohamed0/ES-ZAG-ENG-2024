#include <stdio.h>
main()
{
   int num;
   printf("enter the number :");
   scanf("%d",&num);
   printf("Binary representation: ");
   Binary(num);

    return 0;

}
void Binary(int num) {
    int startedPrinting = 0;

    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        if ((num & (1 << i)) || startedPrinting) {
            printf("%d", (num & (1 << i)) ? 1 : 0);
            startedPrinting = 1;
        }
    }

    if (!startedPrinting) {
        printf("0");
    }
}
