#include <stdio.h>

int main() {
    printf("Aditya Bawre 10080");
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("Largest number: %d\n", num1);
    } else {
        printf("Largest number: %d\n", num2);
}
    
    int sum = num1 + num2;
    printf("Sum of two numbers: %d\n", sum);
 
    return 0;
}
