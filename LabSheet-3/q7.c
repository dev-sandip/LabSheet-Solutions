#include<stdio.h>
int main(){
int a,b,c;
char sign;
printf("Enter the numbers");
scanf("%d%d",&a,&b);
printf("What type of calculations do you want to perform?");
scanf(" %c",&sign);
switch(sign){
case'+':c=a+b;
printf("The sum of %d and %d is %d",a,b,c);
break;
case '-':c=a-b;
printf("The difference of %d and %d is %d",a,b,c);
break;
case'*':c=a*b;
printf("The product of %d and %d is %d",a,b,c);
break;
case'/': c=a/b;
printf("The division of %d and %d is %d",a,b,c);
break;
}
}