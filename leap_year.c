#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    if (year%400 == 0)
    {
        printf("\nLeap year");
    }
    else if (year%100 == 0)
    {
        printf("\nNot a leap year");
    }
    else if (year%4 == 0)
    {
        printf("\nLeap year");
    }
    else
    {
        printf("\nNot a leap year");
    }
    return 0;

}
