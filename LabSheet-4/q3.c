#include <stdio.h>
int main(){
int a=15,c=35;
float b = 20.43;
printf("A=%5d|%-7d|%7d|%-7d|%7d|%-7d|%7d|%-7d|%7d|%-7d|\n",a,a,a,a,a,a,a,a,a,a);
printf("B=%.2f|%-7.2f|%7.2f|%-7.2f|%7.2f|%-7.2f|%7.2f|%-7.2f|%7.2f|%-7.2f|\n",b,b,b,b,b,b,b,b,b,b);
printf("C=%5d|%-7d|%7d|%-7d|%7d|%-7d|%7d|%-7d|%7d|%-7d|\n",c,c,c,c,c,c,c,c,c,c);
return 0;
}