//Search in a Sorted 2D Matrix
#include <stdio.h>

#define ROWS 3
#define COLS 3

// Simple approach: precompute min of each row and max of each column, then compare
int findSaddlePoint(int matrix[ROWS][COLS]) {
    int rowMin[ROWS];
    int colMax[COLS];

    for (int i = 0; i < ROWS; i++) {
        rowMin[i] = matrix[i][0];
        for (int j = 1; j < COLS; j++) {
            if (matrix[i][j] < rowMin[i])
                rowMin[i] = matrix[i][j];
        }
    }

    for (int j = 0; j < COLS; j++) {
        colMax[j] = matrix[0][j];
        for (int i = 1; i < ROWS; i++) {
            if (matrix[i][j] > colMax[j])
                colMax[j] = matrix[i][j];
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j])
                return matrix[i][j];
        }
    }
    return -1;
}

int main() {
    int matrix[ROWS][COLS] = {
        {3, 6, 8},
        {1, 5, 9},
        {2, 4, 7}
    };
    int result = findSaddlePoint(matrix);
    printf(result == -1 ? "No saddle point\n" : "Saddle point: %d\n", result);
    return 0;
}
