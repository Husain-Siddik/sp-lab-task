#include <stdio.h>

int main() {
    int n, i, sum = 0;

   
    printf(" the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        
        scanf("%d", &arr[i]);
        
    }

  
    for (i = 0; i < n; i++) {
        
        sum += arr[i];  
        
    }

   
    printf("The sum is: %d\n", sum);

    return 0;
}
