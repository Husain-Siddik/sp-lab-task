//Problem: Sum of N natural numbers

#include <stdio.h>

int main() {
    int n, i, sum = 0;


    printf("Enter a  integer: ");
    scanf("%d", &n);

   
    for (i = 1; i <= n; i++) {
        
        sum += i;  
    }

    
    printf("The sum  %d natural numbers is: %d\n", n, sum);

    return 0;
}
