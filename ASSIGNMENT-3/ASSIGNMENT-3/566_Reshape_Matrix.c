int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes) {
    int rows = matSize;
    int cols = matColSize[0];

    if (rows * cols != r * c) {
        *returnSize = rows;
        *returnColumnSizes = (int*)malloc(rows * sizeof(int));

        for (int i = 0; i < rows; i++) {
            (*returnColumnSizes)[i] = matColSize[i];
        }

        return mat;
    }

    int** result = (int**)malloc(r * sizeof(int*));

    *returnSize = r;
    *returnColumnSizes = (int*)malloc(r * sizeof(int));

    for (int i = 0; i < r; i++) {
        result[i] = (int*)malloc(c * sizeof(int));
        (*returnColumnSizes)[i] = c;

        for (int j = 0; j < c; j++) {
            int index = i * c + j;
            result[i][j] = mat[index / cols][index % cols];
        }
    }

    return result;
}
