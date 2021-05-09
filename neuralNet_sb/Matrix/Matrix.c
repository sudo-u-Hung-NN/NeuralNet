//
// Created by ashitaka on 08/05/2021.
//
#include "../Object/ObjectManager.h"
#include "Matrix.h"
#include "string.h"
#include "stdlib.h"
#include "stdio.h"

Matrix *newMatrix(char *name, int nrow, int ncol, double value) {
    if (strlen(name) > MAX_NAME_LEN) {
        error(ERROR_TOOLONG_NAME, "newMatrix", "Matrix.c");
    }

    Matrix *mt = (Matrix*) malloc(sizeof(Matrix));

    mt->name = (char *) malloc(MAX_NAME_LEN * sizeof(char));
    strcpy(mt->name, name);

    mt->nrow = nrow;
    mt->ncol = ncol;

    mt->data = (double **) malloc(nrow * sizeof(double *)); //Init data[][]
    for (int i = 0; i < nrow; ++i) {
        mt->data[i] = (double *) malloc(ncol * sizeof(double )); // Init data[i] = double[]
    }

    for (int i = 0; i < nrow; ++i) {
        for (int j = 0; j < ncol; ++j) {
            mt->data[i][j] = value;
        }
    }

    declareMatrix(mt);
    return mt;
}

Matrix *copy(Matrix *mt) {
    Matrix *nmt = newMatrix(mt->name, mt->nrow, mt->ncol, 0);
    for (int i = 0; i < mt->nrow; ++i) {
        for (int j = 0; j < mt->ncol; ++j) {
            nmt->data[i][j] = mt->data[i][j];
        }
    }
    return nmt;
}

Matrix *transpose(Matrix* mt) {
    char name[MAX_NAME_LEN] = "";
    strcat(name, mt->name);
    strcat(name, " transposed");

    Matrix *nmt = newMatrix(name, mt->ncol, mt->nrow, 0);
    for (int i = 0; i < mt->nrow; ++i) {
        for (int j = 0; j < mt->ncol; ++j) {
            nmt->data[j][i] = mt->data[i][j];
        }
    }

    return nmt;
}

Matrix *eye(int size) {
    Matrix *mt = newMatrix("eye",size, size, 0);
    for (int i = 0; i < mt->nrow; ++i) {
            mt->data[i][i] = 1;
    }
    return mt;
}

Vector *flatten(Matrix *mt) {
    char name[MAX_NAME_LEN] = "";
    strcat(name, mt->name);
    strcat(name, " flatten");

    Vector *vct = newVector(name,mt->nrow * mt->ncol, 0);
    for (int i = 0; i < mt->nrow; ++i) {
        for (int j = 0; j < mt->ncol; ++j) {
            vct->data[i* mt->ncol + j] = mt->data[i][j];
        }
    }
    return vct;
}

Matrix *reshape(Matrix *mt, int nrow, int ncol) {
    Vector *vct = flatten(mt);

    if (vct->length != nrow * ncol){
        error(ERROR_INVALID_SHAPE, "reshape", "Matrix.c");
    }

    Matrix *nmt = newMatrix(mt->name, nrow, ncol, 0);
    for (int i = 0; i < nrow; ++i) {
        for (int j = 0; j < ncol; ++j) {
            nmt->data[i][j] = vct->data[i*ncol + j];
        }
    }

    freeVector(vct);
    freeMatrix(mt);
    return nmt;
}

void freeMatrix(Matrix *mt) {
    if (MODE) {
        printf("Free matrix %s......", mt->name);
    }
    for (int i = 0; i < mt->nrow; ++i) {
        free(mt->data[i]);
    }
    free(mt->data);
    free(mt->name);
    free(mt);
    if (MODE) {
        printf(" done\n");
    }
}

void printMatrix(Matrix* mt) {
    if (mt == NULL) {
        error(ERROR_NULL_OBJ_PRINT, "printMatrix", "Matrix.c");
    }
    printf("Matrix '%s' of size (%d, %d)\n", mt->name, mt->nrow, mt->ncol);
    for (int i = 0; i < mt->nrow; ++i) {
        for (int j = 0; j < mt->ncol; ++j) {
            printf("%.2f\t", mt->data[i][j]);
        }
        printf("\n");
    }
}

Matrix *append(Matrix *a, Matrix *b) {
    if (a->ncol != b->ncol) {
        error(ERROR_INVALID_SIZE_CONCAT, "append", "Matrix.c");
    }

    char name[MAX_NAME_LEN] = "";
    strcat(name, b->name);
    strcat(name, " append ");
    strcat(name, a->name);

    Matrix *mt = newMatrix(name, a->nrow + b->nrow, a->ncol, 0);

    for (int i = 0; i < a->nrow; ++i) {
        for (int j = 0; j < a->ncol; ++j) {
            mt->data[i][j] = a->data[i][j];
        }
    }

    for (int i = a->nrow ; i < a->nrow + b->nrow; ++i) {
        for (int j = 0; j < a->ncol; ++j) {
            mt->data[i][j] = b->data[i - (a->nrow)][j];
        }
    }

    return mt;
}