#include <stdio.h>
int main() {
    //ADITYA SINGH ERP:-10116
    int arr[5] = {4, 3, 9, 1, 5};
    int i;
    int max = arr[0];
    int min = arr[0];
    for (i = 1; i < 5; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}



// OUTPUT:-Maximum = 9
        // Minimum = 1

