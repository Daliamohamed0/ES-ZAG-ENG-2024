#include<stdio.h>

unsigned char setBit(unsigned char num, int bit_pos) {
    return num | (1 << bit_pos);
}

unsigned char clearBit(unsigned char num, int bit_pos) {
    return num & ~(1 << bit_pos);
}

unsigned char toggleBit(unsigned char num, int bit_pos) {
    return num ^ (1 << bit_pos);
}

int readBit(unsigned char num, int bit_pos) {
    return (num >> bit_pos) & 1;
}


int main()
{
    unsigned char num;
    int bit_pos , id;

    printf("the available functions:\n");
    printf("1. Set bit\n");
    printf("2. Clear bit\n");
    printf("3. Toggle bit\n");
    printf("4. Read bit\n");

    printf("Enter  the number : ");
    scanf("%hhu", &num);

    printf("Enter the bit number : ");
    scanf("%d", &bit_pos);

    printf("Enter the function ID : ");
    scanf("%d", &id);

    switch (id) {
        case 1:
            num = setBit(num, bit_pos);
            printf("Number after setting bit: %hhu\n", num);
            break;
        case 2:
            num = clearBit(num, bit_pos);
            printf("Number after clearing bit: %hhu\n", num);
            break;
        case 3:
            num = toggleBit(num, bit_pos);
            printf("Number after toggling bit: %h\n", num);
            break;
        case 4:
            printf("Value of the bit: %d\n", readBit(num, bit_pos));
            break;
        default:
            printf("Invalid function ID\n");
            break;
    }

    return 0;
}








