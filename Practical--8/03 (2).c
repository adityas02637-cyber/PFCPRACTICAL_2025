#include <stdio.h>
//Name--Aditya singh ERP-10116
int main() {
    #include <stdio.h>ss
void printTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter height: ");
    scanf("%d", &n);

    printTriangle(n);   // function call

    return 0;
}



//OUTPUT :-
    //     *
      //   **
        // ***
         //****
