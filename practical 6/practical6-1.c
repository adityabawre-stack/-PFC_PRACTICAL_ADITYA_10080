#include <stdio.h>
//AIM 1.) Print numbers from a to b using loops 
int main() { printf("Aditya Bawre_10080");
    int a, b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);

    for (; a <= b; a++) {
        printf("%d  ", a);
    }

    return 0;
}