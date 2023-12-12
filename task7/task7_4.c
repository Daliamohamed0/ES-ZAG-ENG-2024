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

    int y[n];
    int j=n-1;
     for (int i = 0; i < n; i++)
     {

              y[i]=x[j];
              j--;
     }

     printf("the reverse array=");
     for (int i = 0; i < n; i++) {
        printf("%d "  , y[i]);

    }

}
