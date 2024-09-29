#include <stdio.h>

int main() {
int a , b ,sum;

scanf("%d %d" ,&a, &b);
sum = a + b;

if(sum %2 == 0){
    printf("the sum is even number");
}else{
    printf("the sum is odd number"); 
}

    return 0;
}