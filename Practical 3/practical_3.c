#include <stdio.h>

int main() {
    printf("Aditya Bawre 10080");
    int a, b, temp;
    float x = 12.5;
    char c = 'A';
    
    // Displaying various data types using format specifiers
    printf("Integer value: %d\n", 10);
    printf("Floating value: %.2f\n", x);
    printf("Character value: %c\n", c);
    
    // Swapping two numbers
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
