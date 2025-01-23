// 45. Add 2 Matrix.

#include<stdio.h>

int main() {
    int matrix1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int matrix2[3][3] = {
        {10,11,12},
        {13,14,15},
        {16,17,18}
    };

    int sumMatrix[3][3] = {{}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}