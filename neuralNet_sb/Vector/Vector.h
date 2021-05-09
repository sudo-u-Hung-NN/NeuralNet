//
// Created by ashitaka on 08/05/2021.
//

#ifndef NEURALNET_SB_VECTOR_H
#define NEURALNET_SB_VECTOR_H
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "../ExceptionHandling/error.h"

typedef struct {
    char *name;
    int length;
    double *data;
}Vector;

Vector *newVector(char* name, int length, double value);

void freeVector(Vector* vct);
void printVector(Vector* vct);

#endif //NEURALNET_SB_VECTOR_H
