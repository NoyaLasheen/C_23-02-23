#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b && a<c)
    {
        printf("\n%d is the smallest number",a);
    }
    else if (b<a && b<c)
    {
        printf("\n%d is the smallest number",b);
    }
    else
    {
        printf("\n%d is the smallest number",c);
    }
    return 0;
}
