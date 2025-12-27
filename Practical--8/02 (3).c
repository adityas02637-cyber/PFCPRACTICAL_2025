#include <stdio.h>
//Aditya Singh ERP=10116
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swapping: %d %d", x, y);
    return 0;
}


/* 
input x = 5
    y = 9
*/
/*
output After swapping: 9 5

*/