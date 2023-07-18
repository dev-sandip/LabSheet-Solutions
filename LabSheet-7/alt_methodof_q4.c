//Alternative and easy  method of q4 ie.finding frequency of an array
#include <stdio.h>
int main()
{
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d integers: ", n);
for (int i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
int count = 0, num;
printf("Enter the number to count the frequency: ");
scanf("%d", &num);
for (int i = 0; i < n; i++)
{
if (arr[i] == num)
{
count++;
}
}
printf("The frequency of %d in the given array is %d\n", num, count);
return 0;
}