// WAP to access the elements of the array using the pointers.
#include <stdio.h>
    
int main()
{
    int n,*ptr,i;
    int a[5]={1,3,5,7,9};
    ptr=a;
    printf("The elements of array are :\n");
    for(i=0;i<5;i++){
        printf("%d\t",*ptr);
        ptr++;
    }
    return 0;
}