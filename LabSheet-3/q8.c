#include<stdio.h>
int main(){
float c,math,applied,electrical,physics ,percent;
printf("Enter the marks of c programming , mathematics, applied, electrical,physics");
scanf("%f%f%f%f%f",&c,&math,&applied,&electrical,&physics);
if(c>=40 && math>=40 && applied>=40&&electrical>=40&&physics>=40&& c<=100 && math<=100 &&
applied<=100&&electrical<=100&&physics<=100){
percent= ((c+math+applied+electrical+physics)/500)*100;
if(percent>=90){
printf("Your Grade is A");

}else if (percent>=80){
printf("Your grade is B");
}else if (percent>70){
printf("Your grade is C");
}else if (percent>=60){
printf("Your grade is D");
}else
{
printf("Your grade is E");
}
}else{
printf("Student is failed.");
}
return 0;
}