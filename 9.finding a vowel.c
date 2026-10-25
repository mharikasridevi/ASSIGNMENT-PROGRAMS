#include <stdio.h>
void main() 
{
char c;
printf("Enter the alphabet:");
scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' ||
        c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' ||
        c == 'O' || c == 'U')
     {
        printf("Given alphabet is a Vowel");
     }
    else
     {
        printf("Given alphabet is not a Vowel");
     }
}
