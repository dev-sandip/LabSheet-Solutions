// WAP to find the sum and difference of two number using pointers .
#include <stdio.h>
    
int main()
{
    int a,b,sum,diff;
    int *ptr1,*ptr2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a,&b);
    ptr1=&a;
    ptr2=&b;
    sum = *ptr1+*ptr2;
    diff = *ptr1-*ptr2;
    printf("Sum = %d and Difference = %d",sum,diff);
    return 0;
}