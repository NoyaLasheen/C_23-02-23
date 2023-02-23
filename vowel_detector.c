#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the letter: ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\nVowel\n");
            break;
        default:
            printf("\nNot a vowel\n");
    }
    return 0;
}
