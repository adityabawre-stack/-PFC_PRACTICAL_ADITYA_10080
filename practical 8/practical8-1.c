#include <stdio.h>
       
int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum = sum + (n % 10); 
        n = n / 10;           
    }
    return sum;
}

int main() {
    printf("Aditya Bawre_10080");
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int result = sumOfDigits(n);
    printf("Output = %d\n", result);

    return 0;
}