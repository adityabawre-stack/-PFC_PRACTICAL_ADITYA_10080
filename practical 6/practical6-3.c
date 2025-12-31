#include <stdio.h>
//ATM Pin authentication
int main() {
    printf("Aditya Bawre_10080");
    int correctPin,enteredPin,attempts;
     correctPin = 9889;
     attempts = 3;

    while (attempts > 0) {
        printf("Enter PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == correctPin) {
            printf("Access Granted!\n");
            break;
        } else {
            attempts--;
            if (attempts > 0) {
                printf("Wrong PIN! Attempts left: %d\n", attempts);
            } else {
                printf("Card Blocked!\n");
            }
        }
    }

    return 0;
}