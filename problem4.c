//Write a C program that takes a number and determines whether it's positive, negative, or zero using if-else statements.


#include <stdio.h>

int main() {
int a ;

scanf("%d" ,&a);

if( a > 0 ){
    printf(" %d --> is Positive Number", a);
}else if(a < 0){
    printf(" %d --> is Negetive Number", a);
}
else{
   printf("%d --> zero", a);
}

    return 0;
}