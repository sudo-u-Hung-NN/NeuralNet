//
// Created by ashitaka on 08/05/2021.
//

#include "Linagb.h"

Matrix *mDot(Matrix *a, Matrix *b) {
    if (a->ncol != b->nrow) {
        error(ERROR_INVALID_SHAPE, "mDot", "Linabg.c");
    }

    char name[MAX_NAME_LEN] = "";
    strcat(name, a->name);
    strcat(name, " mDot ");
    strcat(name, b->name);

    Matrix *mt = newMatrix(name, a->nrow, b->ncol, 0);
    double sum = 0;
    for (int i = 0; i < a->nrow; ++i) {
        for (int j = 0; j < b->ncol; ++j) {
            for (int k = 0; k < a->ncol; ++k) {
                sum += a->data[i][k] * b->data[k][j];
            }
            mt->data[i][j] = sum;
            sum = 0;
        }
    }
    return mt;
}

Matrix *mMul(Matrix *a, Matrix *b) {
    if (a->ncol != b->ncol || a->nrow != b->nrow) {
        error(ERROR_INVALID_SHAPE, "mMul", "Linabg.c");
    }

    char name[MAX_NAME_LEN] = "";
    strcat(name, a->name);
    strcat(name, " mMul ");
    strcat(name, b->name);

    Matrix *mt = newMatrix(name, a->nrow, b->ncol, 0);
    for (int i = 0; i < a->nrow; ++i) {
        for (int j = 0; j < b->ncol; ++j) {
            mt->data[i][j] = a->data[i][j] * b->data[i][j];
        }
    }
    return mt;
}

Matrix *mSum(Matrix *a, Matrix *b) {
    if (a->ncol != b->ncol || a->nrow != b->nrow) {
        error(ERROR_INVALID_SHAPE, "mSum", "Linabg.c");
    }

    char name[MAX_NAME_LEN] = "";
    strcat(name, a->name);
    strcat(name, " mSum ");
    strcat(name, b->name);

    Matrix *mt = newMatrix(name, a->nrow, b->ncol, 0);
    for (int i = 0; i < a->nrow; ++i) {
        for (int j = 0; j < b->ncol; ++j) {
            mt->data[i][j] = a->data[i][j] + b->data[i][j];
        }
    }
    return mt;
}

Matrix *mSumi(double immediate, Matrix *b) {
    Matrix *mt = newMatrix("immediate", b->nrow, b->ncol, immediate);
    Matrix *smt = mSum(mt, b);
    freeMatrix(mt);
    return smt;
}

Matrix *mMuli(double immediate, Matrix *b) {
    Matrix *tmp = newMatrix("immediate", b->nrow, b->ncol, immediate);
    Matrix *mt = mMul(tmp, b);
    freeMatrix(tmp);
    return mt;
}

Matrix *mFlipSign(Matrix *b) {
    return mMuli(-1, b);
}





