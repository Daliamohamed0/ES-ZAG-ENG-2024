#include <stdio.h>
#include <stdlib.h>

enum month {
   January =1,
   February,
   March,
   April,
   May,
   June,
   July,
   August,
   September,
   October,
   November,
   December
};


int main()
{
   enum month m1;

   for(m1= January;m1<=12;m1++){
    switch(m1)
{


        case 1:
            printf("January=%i\n",m1);
            break;
        case 2:
            printf("February=%i\n",m1);
            break;
        case 3:
            printf("March=%i\n",m1);
            break;
        case 4:
            printf("April=%i\n",m1);
            break;
        case 5:
            printf("May=%i\n",m1);
            break;
        case 6:
            printf("June=%i\n",m1);
            break;
        case 7:
            printf("July=%i\n",m1);
            break;
        case 8:
            printf("August=%i\n",m1);
            break;
        case 9:
            printf("September=%i\n",m1);
            break;
        case 10:
            printf("October=%i\n",m1);
            break;
        case 11:
            printf("November=%i\n",m1);
            break;
        case 12:
            printf("December=%i\n",m1);
            break;


        default:
           break;


       }
}

    return 0;
}

