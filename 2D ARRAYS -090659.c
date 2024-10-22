#include <stdio.h>
/*author ;Anyasi Liloyo Munala 
  Reg;CT101/G /22812 /24 */
int main() {
    int matrix[2][3];
    int rowSum[2] = {0};


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = (i + 1) * (j + 2);
        }
    }


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            rowSum[i] += matrix[i][j];
        }
    }


    printf("2D Array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Sum of Row1: %d\n", rowSum[0]);
    printf("Sum of Row2: %d\n", rowSum[1]);

    return 0;
}