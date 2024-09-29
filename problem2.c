//Write a C program to check whether a given number is odd or even using an if-else statement.

#include <stdio.h>

int main() {
int a ;
scanf("%d" ,&a);

if( a %2 == 0){
    printf("this even number");
}else{
    printf("this is odd number"); 
}

    return 0;
}