// WAP to read two values from the user in main(). Write a function calculate() to calculate sum, product, difference and quotient of the numbers. Print the sum,product, difference and quotient in the main function using pass by reference concept.
#include<stdio.h>
float calculator(float *a,float *b,float *sum,float *diff, float *product, float *quotient){
    *sum=*a+*b;
    *diff=*a-*b;
    *product=*a * *b;
    *quotient= *a / *b;
}
int main(){
    float a,b,sum,diff,product,quotient;
    printf("Enter the value of  a and b:\n");
    scanf("%f%f",&a,&b);
     calculator(&a,&b,&sum,&diff,&product,&quotient);
    printf("Sum=%f\n Difference=%f\n product=%f\n Quoitent = %f\n",sum,diff,product,quotient);
    return 0;
}