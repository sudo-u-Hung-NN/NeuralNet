//
// Created by ashitaka on 08/05/2021.
//

#ifndef NEURALNET_SB_LINAGB_H
#define NEURALNET_SB_LINAGB_H
#include "../Object/ObjectManager.h"
#include "../Object/Matrix/Matrix.h"
#include "../Object/Vector/Vector.h"

// Matrix section
Matrix *mDot(Matrix *a, Matrix *b);
Matrix *mMul(Matrix *a, Matrix *b);
Matrix *mSum(Matrix *a, Matrix *b);
Matrix *mFlipSign(Matrix *b);

// Matrix section with immediate
Matrix *mSumi(double immediate, Matrix *b);
Matrix *mMuli(double immediate, Matrix *b);

// Vector section
Vector *vMul(Vector *a, Vector *b);
Vector *vSum(Vector *a, Vector *b);
Vector *vFlipSign(Vector *a);

// Vector section with immediate
Vector *vMuli(double immediate, Vector *b);
Vector *vSumi(double immediate, Vector *b);

// Vector - Matrix interaction
Matrix *mvAppend(Matrix *a, Vector *b);
double *vSliceC(Matrix *a, int column);
double *vSliceR(Matrix *a, int row);

#endif //NEURALNET_SB_LINAGB_H
