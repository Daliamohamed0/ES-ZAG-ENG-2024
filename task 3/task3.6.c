#include<stdio.h>
int main()
{
    int n,number, max, min;
    printf("Enter the number of values: ");
    scanf("%d", &n);

   printf("Enter number 1: ");
    scanf("%d", &number);

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
     if (number > max) {
            max = number;
        }
     if (number < min) {
            min = number;
        }
}

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
