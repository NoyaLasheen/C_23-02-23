#include<stdio.h>
int main()
{
    int a;
    printf("Enter the integer");
    scanf("%d",&a);
    if (a>0)
        {
            printf("\nPositive");
        }
    else if (a==0)
    {
        printf("\nZero");
    }
    else
    {
        printf("\nNegative");
    }

    return 0;
}
