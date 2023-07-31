#include <stdio.h>
int main()
{
printf("Enter a character: ");
char x;

scanf("%c",&x);
if (x=='A'|| x=='E' || x=='I' || x=='O'|| x=='U'|| x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
{
printf(" %c is a vowel \n", x);
}
else
{
printf("%c is a consonant ", x);
}
return 0;
}