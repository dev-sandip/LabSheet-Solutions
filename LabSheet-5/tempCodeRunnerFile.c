 int n;
 int num=0;
 printf("Enter the number:");
 scanf("%d",&n);
 while(n!=0)
 {
 num=num*10+n%10;
 n= n/10;
 }