//WAP to find HCF and LCM of two numbers.
#include <stdio.h>

#include <stdio.h>
    
int main()
{
int a,b,hcf,lcm ,i;
printf("Enter the value of a\n");
scanf("%d", &a);
printf("Enter the value of b\n");
scanf("%d", &b);
for (i=1 ; i<=a ; i++){
if ( a%i==0 && b%i==0){
    hcf=i;
}
}
lcm = (a*b)/hcf;
printf("%d is HCF\n",hcf);
printf("%d is LCM\n",lcm); return 0;
}
