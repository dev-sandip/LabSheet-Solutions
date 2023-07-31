#include <stdio.h>
    
int main()
{
    char a;
    printf("Enter the character:\n");
    a = getchar();
    printf("Your Charater is :\n");
    putchar(a);
    printf("\nThe ASCII value for %c is %d",a,a);
    return 0;
}