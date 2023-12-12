#include <stdio.h>

int main() {
    char n[100];
    int freq[10] = {0};

    printf("Enter a string: ");
    scanf("%s", n);

    for (int i = 0; n[i] != '\0'; i++) {
        if (n[i] >= '0' && n[i] <= '9') {
            int digit = n[i] - '0';
            freq[digit]++;
        }
    }

    printf("The frequency of each digit:\n");

    for (int i = 0; i < 10; i++) {
        printf("%d  ",  freq[i]);
    }

    return 0;
}
