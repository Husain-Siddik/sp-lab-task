#include <stdio.h>

int main() {
int a ,b,c;

scanf("%d %d %d" ,&a ,&b , &c);

if( a > b && a > c ){
    printf("the largest namber is %d", a);
}else if(b > a && b > c){
    printf("the largest namber is %d", b);
}else if(a == b || b ==c ||c == a ){
    printf(" all the Numbers are same");
}
else{
   printf("the largest namber is %d", c);
}

    return 0;
}