#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int i, j, r, c;

    printf("Enter rows and columns for matrices: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nAddition of Matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    int min, col, saddle = 0;
    for(i = 0; i < r; i++) {
        min = a[i][0];
        col = 0;

        for(j = 1; j < c; j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }

        for(j = 0; j < r; j++) {
            if(min < a[j][col])
                break;
        }

        if(j == r) {
            printf("\nSaddle Point = %d\n", min);
            saddle = 1;
        }
    }

    if(saddle == 0)
        printf("\nNo Saddle Point Found\n");

    if(r == 2 && c == 2) {
        int det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

        if(det != 0) {
            printf("\nInverse of Matrix A:\n");
            printf("%.2f\t%.2f\n", (float)a[1][1]/det, (float)-a[0][1]/det);
            printf("%.2f\t%.2f\n", (float)-a[1][0]/det, (float)a[0][0]/det);
        } else {
            printf("\nInverse not possible (Determinant = 0)\n");
        }
    }

    int rowSum, colSum, diag1 = 0, diag2 = 0, magic = 1;
    if(r == c) {
        rowSum = 0;
        for(j = 0; j < c; j++)
            rowSum += a[0][j];

        for(i = 0; i < r; i++) {
            int tempRow = 0, tempCol = 0;
            for(j = 0; j < c; j++) {
                tempRow += a[i][j];
                tempCol += a[j][i];
            }
            if(tempRow != rowSum || tempCol != rowSum)
                magic = 0;

            diag1 += a[i][i];
            diag2 += a[i][r-i-1];
        }

        if(diag1 != rowSum || diag2 != rowSum)
            magic = 0;

        if(magic)
            printf("\nIt is a Magic Square\n");
        else
            printf("\nIt is not a Magic Square\n");
    }

    return 0;
}