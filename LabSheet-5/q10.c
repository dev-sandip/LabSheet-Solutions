// WAP to display the number in reverse order.
#include<stdio.h>
int reverse(int n)
{
 int num=0;
 while(n!=0)
 {
 num=num*10+n%10;
 n/=10;
 }
 return num;
}
int main()
{
 int n;
 printf("Enter the number:");
 scanf("%d",&n);
 printf("The number in reverse order is:%d",reverse(n));
 return 0;
}