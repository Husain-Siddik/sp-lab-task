// Calculate Average

#include <stdio.h>

int main() {
    int  a,b,c,d,e;
    printf("enter 5 number  ");
    scanf("%d %d %d %d %d",&a ,&b,&c,&d,&e);
    float  sum = 0, average;

   sum = a+b+c+d+e;

    average = sum / 5;

    
    printf("The average  is: %.2f\n", average);

    return 0;
}
