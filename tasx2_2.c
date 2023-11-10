# include <stdio.h>

int main()
{
    int x,y,z;
    printf("Enter the 3 numbers :");
    scanf("%d%d%d",&x,&y,&z );
    if(x>=y&&x>=z)
    {
        printf("The Maximum Number=%d\n",x);
        if(y<=z)
            printf("The Minimum Number=%d",y);
        else
            printf("The Minimum Number=%d",z);

    }
     else if(y>=x&&y>=z)
    {
        printf("The Maximum Number=%d\n",y);
        if(x<=z)
            printf("The Minimum Number=%d",x);
        else
            printf("The Minimum Number=%d",z);

    }
     else
    {
        printf("The Maximum Number=%d\n",z);
        if(y<=x)
            printf("The Minimum Number=%d",y);
        else
            printf("The Minimum Number=%d",x);

    }

}
