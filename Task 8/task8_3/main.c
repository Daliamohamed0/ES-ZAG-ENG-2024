#include <stdio.h>
#include "function.h"

int main() {
    int x = 1;
    int result;

    printf("num=1 bitno=2\n");

    SET_BIT(x, 2);
    printf("After setting bit: num = %d\n", x);

    result = CLR_BIT(x, 2);
    printf("After clearing bit: num = %d\n", result);


    result = TOGGLE_BIT(x, 2);
    printf("After toggling bit: num = %d\n", result);

    return 0;
}
