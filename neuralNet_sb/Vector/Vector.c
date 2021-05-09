//
// Created by ashitaka on 08/05/2021.
//
#include "../Object/ObjectManager.h"
#include "Vector.h"

Vector *newVector(char *name, int length, double value){
    if (strlen(name) > MAX_NAME_LEN) {
        error(ERROR_TOOLONG_NAME, "newVector", "Vector.c");
    }

    Vector *vct = (Vector*) malloc(sizeof(Vector));
    vct->length = length;
    vct->data = (double *) malloc(length * sizeof(double));
    for (int i = 0; i < length; ++i) {
        vct->data[i] = value;
    }
    vct->name = (char *) malloc(MAX_NAME_LEN * sizeof(char));
    strcpy(vct->name,name);

    declareVector(vct);
    return vct;
}

void freeVector(Vector* vct) {
    if (MODE) {
        printf("Free matrix %s......", vct->name);
    }
    free(vct->data);
    free(vct->name);
    free(vct);
    if (MODE) {
        printf(" done\n");
    }
}

void printVector(Vector* vct) {
    if (vct == NULL) {
        error(ERROR_NULL_OBJ_PRINT, "printVector", "Vector.c");
    }

    printf("Vector '%s' len %d\n", vct->name, vct->length);
    for (int i = 0; i < vct->length; ++i) {
        printf("%.2f\t", vct->data[i]);
    }
    printf("\n");
}