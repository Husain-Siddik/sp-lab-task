//Problem: Array Reversal

#include <stdio.h>

int main() {
    int n, i;

 
    printf(" the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        
        scanf("%d", &arr[i]);
    }

  

    
    printf("\n Reversed array: ");
    for (i = n - 1; i >= 0; i--) {
        
        printf("%d ", arr[i]);
        
    }

    printf("\n");

    return 0;
}