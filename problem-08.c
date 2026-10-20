#include<stdio.h>
#define MAX 10

void readMatrix(int mat[MAX][MAX], int n, char name){
    printf("Enter the elements of matrix %c (%d X %d): \n", name, n, n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMatrix(int mat[MAX][MAX], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%-8d ", mat[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int A[MAX][MAX], int B[MAX][MAX], int sum[MAX][MAX], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiplyMatrix(int A[MAX][MAX], int B[MAX][MAX], int prod[MAX][MAX], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            prod[i][j] = 0;
            for (int k = 0; k < n; k++){
                prod[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int n;
    int A[MAX][MAX], B[MAX][MAX], sum[MAX][MAX], prod[MAX][MAX];

    printf("Enter the size of the square matrices : \n");
    scanf("%d", &n);

    if (n <= 0 || n > MAX){
        printf("Please enter a positive integer less than or equal to %d.\n", MAX);
        return 0;
    }

    readMatrix(A, n, 'A');
    readMatrix(B, n, 'B');

    printf("Matrix A: \n");
    printMatrix(A, n);

    printf("Matrix B: \n");
    printMatrix(B, n);

    addMatrix(A, B, sum, n);
    printf("Sum of A and B: \n");
    printMatrix(sum, n);

    multiplyMatrix(A, B, prod, n);
    printf("Product of A and B: \n");
    printMatrix(prod, n);

    return 0;
}