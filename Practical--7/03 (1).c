#include <stdio.h>

int main() {
    //Aditya Singh ERP=10116
    for(char i = 'A'; i <= 'D'; i++) {
        for(char j = 'A'; j <= i; j++) {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}
/*
A
AB
ABC
ABCD
*/