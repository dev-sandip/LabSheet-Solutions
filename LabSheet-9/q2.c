// WAP to add two distance (feet-inch) using the structure.
#include <stdio.h>

typedef struct distance {
    int feet;
    int inch;
} distance;
    
int main() {
    distance d1, d2, d3;
    
    printf("Enter the first distance (feet inch): ");
    scanf("%d%d", &d1.feet, &d1.inch);
    
    printf("Enter the second distance (feet inch): ");
    scanf("%d%d", &d2.feet, &d2.inch);
    
    d3.inch = d1.inch + d2.inch;
    d3.feet = d1.feet + d2.feet;
    
    while (d3.inch >= 12) {
        d3.inch = d3.inch - 12;
        d3.feet++;
    }
    
    printf("Sum = %d feet %d inch", d3.feet, d3.inch);
    return 0;
}
