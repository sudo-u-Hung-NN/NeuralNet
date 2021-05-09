//
// Created by ashitaka on 08/05/2021.
//

#ifndef NEURALNET_SB_MATRIX_H
#define NEURALNET_SB_MATRIX_H

#include "../Vector/Vector.h"
#include "../ExceptionHandling/error.h"

typedef struct {
    char *name;
    int ncol;
    int nrow;
    double **data;
}Matrix;

Matrix *newMatrix(char* name, int nrow, int ncol, double value);
Matrix *newMatrixFi(char* name, int nrow, int ncol, double **immediate);
Matrix *copy(Matrix *mt);
Matrix *transpose(Matrix* mt);
Matrix *eye(int size);
Matrix *reshape(Matrix *mt, int nrow, int ncol);
Vector *flatten(Matrix *mt);
Matrix *append(Matrix *a, Matrix *b);


void freeMatrix(Matrix *mt);
void printMatrix(Matrix* mt);

#endif //NEURALNET_SB_MATRIX_H
