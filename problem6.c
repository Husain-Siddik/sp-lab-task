#include <stdio.h>

int main() {
   int x,y,z;
   printf("the lengths of three sides of a triangle ");
   scanf("%d %d %d",&x ,&y ,&z);
   
   if(x < y+z || y < x+z || z < x + y){
       printf("valid triangle");
   }else{
       printf("invalid triangle");
   }

    return 0;
}