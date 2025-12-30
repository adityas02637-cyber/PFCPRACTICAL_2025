#include <stdio.h>
int main() {
    //Aditya Singh ERP:-10116
    int arr[5] = {4, 3, 2, 1, 5};
    int i, temp;
         for (i = 0; i < 5 / 2; i++) {
        temp = arr[i];
        arr[i] = arr[5 - 1 - i];
        arr[5 - 1 - i] = temp;
    }
        printf("Reversed Array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}




// OUTPUT:-Reversed Array: 5 1 2 3 4

