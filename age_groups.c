#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age");
    scanf("%d",&age);
    if (age<18)
    {
        printf("\nYoungster");
    }
    else if (age>=18 && age <=40)
    {
        printf("\nAdult");
    }
    else if (age>40 && age<=60)
    {
        printf("\nMiddle aged");
    }
    else
    {
        printf("\nSenior citizen");
    }
    return 0;
}
