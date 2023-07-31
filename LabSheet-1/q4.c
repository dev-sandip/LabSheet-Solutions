#include <stdio.h>
    
int main()
{
    float p,t,r,s;
    printf("Enter the principal amount:\n");
    scanf("%f", &p);
    printf("Enter the rate :\n");
    scanf("%f", &r);
    printf("Enter the time in years:\n");
    scanf("%f", &t);
    s= (p*t*r)/100;
    printf("Simple interest is %f .",s);
    return 0;
}