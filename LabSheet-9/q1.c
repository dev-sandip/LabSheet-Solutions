// WAP to store and print the employee number, name, address and salary of the n
// employee using the structure.

#include <stdio.h>
typedef struct employee{
    int emp_no;
    char name[30];
    float salary;

}emp;
int main()
{
    emp e1;
    printf("Enter the employee number:\n");
    scanf("%d",&e1.emp_no);
    printf("Enter the employee name:\n");
    scanf("%s",e1.name);
     printf("Enter the employee salary:\n");
    scanf("%f",&e1.salary);
    printf("The records are:\n");
    printf("%d\t%s\t%f\n",e1.emp_no,e1.name,e1.salary);
    return 0;
}