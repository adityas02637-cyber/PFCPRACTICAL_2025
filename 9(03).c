#include <stdio.h>
int main() {
    //Aditya Singh   ERP-10116
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0, i;
    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    printf("Sum of even elements = %d", sum);

    return 0;
}






//OUTPUT:-Sum of even elements = 6
