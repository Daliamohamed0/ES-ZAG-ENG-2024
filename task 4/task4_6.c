#include <stdio.h>

int main() {
    int A, B, C, D;


    printf("enter 4 numbers : ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    int product = A * B * C * D;

    int x= product % 100;

    printf("result= %d\n", x);

    return 0;
}

