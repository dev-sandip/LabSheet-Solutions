#include<stdio.h>
int main(){
int a;
printf("Enter the number\n");
scanf("%d",&a);
if (a==0){
printf("%d is zero\n",a );
} else if ( a>0){
printf("%d is positive number\n",a );
} else{
printf("%d is negative number\n",a );
}
return 0;
}