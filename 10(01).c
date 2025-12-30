#include <stdio.h>
int main() {
    // ADITYA SINGH   ERP:-10116 
    int a[3][3] = {
        {4, 8, 1},
        {6, 2, 9},
        {5, 7, 3}
    }
    int i, j;
    int max = a[0][0];
    int min = a[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }
    }
        printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);
    return 0;
}



// OUTPUT:-Maximum = 9
    //    Minimum = 1
