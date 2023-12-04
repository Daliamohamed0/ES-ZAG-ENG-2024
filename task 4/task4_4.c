#include <stdio.h>

int countOnes(unsigned int num) {
    int count = 0;


    for (int i = 0; i < 32; i++) {
        count += (num >> i) & 1;
    }

    return count;
}

int main() {
    unsigned int number;

    printf("Enter an unsigned 32-bit integer: ");
    scanf("%u", &number);

    int x = countOnes(number);
    printf("Number of 1's  %d\n",  x);

    return 0;
}


