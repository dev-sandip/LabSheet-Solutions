#include<stdio.h>
#include<ctype.h>
int main(){

char a;
printf("Enter the character\n");
scanf(" %c",&a);
if (a>='A'&& a<='Z')
{
printf("%c is in uppercase\n",a);
a= tolower(a);
printf("Conversion into lowercase = %c",a);
}else{
printf("%c is in lowercase\n",a);
a= toupper(a);
printf("Conversion into uppercase = %c",a);
}
}