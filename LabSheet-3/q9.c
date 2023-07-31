#include <stdio.h>
nt main() {
int num;
int isPrime = 1;
int divisor = 2;
printf("Enter a number: ");
scanf("%d", &num);
if (num <= 0) {
printf("Number entered: %d\n", num);
} else if (num == 1) {
printf("Neither prime nor composite\n");
} else if (num == 2) {
printf("Smallest and only even prime number\n");
} else {
while (divisor * divisor <= num) {
if (num % divisor == 0) {
isPrime = 0;
break;
}
divisor++;
}
if (isPrime) {
printf("Prime number\n");
} else {
printf("Composite number\n");
if (num % 2 == 0) {
printf("Even\n");
} else {
printf("Odd\n");
}} }
return 0;
}