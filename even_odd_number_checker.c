#include <stdio.h>

int main() 
{
    // Declare integer variable 'num'
    int num;

    // Integer input from user
    printf("Enter a positive integer: ");
    // Read value of user integer input, store in variable 'num'
    scanf("%d", &num);
    
    // if-else statement checks if user integer input is even or odd
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;


}
