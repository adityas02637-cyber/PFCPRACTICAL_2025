#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper half (including middle)
    for (int i = n; i >= 1; i--) {
        // Leading spaces
        for (int space = 0; space < n - i; space++) {
            printf(" ");
        }
        // Stars
        for (int star = 0; star < (2 * i - 1); star++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = 2; i <= n; i++) {
        // Leading spaces
        for (int space = 0; space < n - i; space++) {
            printf(" ");
        }
        // Stars
        for (int star = 0; star < (2 * i - 1); star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}




 OUTPUT:-*******
          *****
           ***
            *
           ***
          *****
         *******

