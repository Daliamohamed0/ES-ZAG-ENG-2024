#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array:");
    scanf("%d", &n);

    printf("Enter %d space-separated integers: ", n);
    int x[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += x[i];
    }

    printf("The sum = %d\n", sum);

    return 0;
}
