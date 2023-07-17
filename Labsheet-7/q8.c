// WAP to find the sum of the rows and column of the matrix.
#include <stdio.h>
int main()
{
    int a[100][100],b[100][100],i,j,m,n,sumofcolumn=0,sumofrow=0;
    printf("Enter the order first of matrix:");
    scanf("%d %d",&m,&n);
 printf("Enter the first matrix");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}

for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      sumofrow = sumofrow+a[i][j];
    }
}

for(j=0;j<n;j++){
    for(i=0;i<m;i++){
      sumofcolumn = sumofcolumn+a[i][j];
    }
}
printf("Matrix is :\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
printf("The sum of row elements of matrix is %d\n",sumofrow);
printf("The sum of column elements of matrix is %d\n",sumofcolumn);

    return 0;
}