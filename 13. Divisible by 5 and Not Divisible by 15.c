#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 15 != 0) {
        printf("The number is divisible by 5 but not by 15.\n");
    }
    else {
        printf("The condition is not satisfied.\n");
    }

    return 0;
}

