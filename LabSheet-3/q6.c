#include<stdio.h>
#include<math.h>
int main() {
float a, b, c,dis, root1,root2, real,img;
printf("Enter the value of a b and c \n");
scanf("%f%f%f",&a, &b, &c);
dis = b * b -4 * a * c;
if (dis ==0.0) {
printf("Roots are real and equal\n");
root1 =root2 = -b /(2.0 * a);
printf("Root1 is = %f andRoot 2= %f",root1, root2);
}
 else if (dis> 0.0) {
printf("Roots are real and unequal\n");
root1 = (-b + sqrt(dis)) / (2.0 * a);
root2 = (-b - sqrt(dis)) / (2.0 * a);
printf("Root 1 is = %f and Root 2= %f", root1, root2);
}
else {
printf("Roots are imaginary\n");
real = -b / (2.0 * a);
img = sqrt(-dis) / (2.0 * a);
printf("Root 1 is = %f +%f i and Root 2= %f - %f i", real, img, real,
img);
}
}