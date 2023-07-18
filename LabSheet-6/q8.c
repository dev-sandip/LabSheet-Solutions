#include <stdio.h>
    int a=10,b=10;
    void func_1(){
        printf("From Function-1 a = %d and b = %d\n",a,b);
    }
    void func_2(){
        a=25;
        b=30;
      printf("From Function-2 a = %d and b = %d\n",a,b);
    }
void incrementStatic() {
    // Declare a static variable
    static int count = 0;
    
    // Increment the static variable and print its value
    count++;
    printf("Static variable count: %d\n", count);
}

int main()
{
    printf("Form main function a =%d and b = %d\n",a,b);
    func_1();
    func_2();
    a=20;
    func_1();
 // Call the incrementStatic function multiple times
     for (int i = 0; i < 5; i++) {
    incrementStatic();
    }
    return 0;
}
#include <stdio.h>



