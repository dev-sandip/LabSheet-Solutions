#include<stdio.h>
#define Pi 3.1415
int main()
{
    int r,area;
    printf("Enter the radius of circle:");
    scanf("%d",&r);
    area = Pi*r*r;
    printf("The area of circle is %d",area);
    return 0;
}