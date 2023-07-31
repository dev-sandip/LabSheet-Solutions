#include<stdio.h>
int main(){
int a;
printf("Enter the number to check:\n");
scanf("%d",&a);
if(a%5==0 && a%11==0){
printf("%d is divisible by 5 and 11 .\n");
}else{
printf("%d is not divsible by 5 and 11.\n");
}
return 0;
}