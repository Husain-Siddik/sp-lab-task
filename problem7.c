#include <stdio.h>

int main() {
    int num, reverseNamber = 0, remainder;

    printf("Enter an Namber: ");
    scanf("%d", &num);

  
    while (num != 0) {
        remainder = num % 10;        
        reverseNamber = reverseNamber* 10 + remainder; 
        num /= 10;  
    }
    
    printf("Reversed number: %d\n", reverseNamber);

    return 0;
}
