//
// Created by ashitaka on 09/05/2021.
//

#ifndef NEURALNET_SB_OBJECTMANAGER_H
#define NEURALNET_SB_OBJECTMANAGER_H

#include "stdlib.h"
#include "../Matrix/Matrix.h"
#include "../Vector/Vector.h"

// Define constant
#define MAX_NAME_LEN 100
#define MODE 0  // 1 - print, 0 - not print

enum ObjectType {
    OBJ_MATRIX,
    OBJ_VECTOR
};

typedef struct ObjectList ObjectList;
struct ObjectList {
    union {
        Matrix *mt;
        Vector *vt;
    };
    enum ObjectType type;
    ObjectList* next;
};

ObjectList *head;

void insertList(ObjectList *newObject);
void declareMatrix(Matrix *mt);
void declareVector(Vector *vt);
void cleanList(ObjectList *tmp);

void printList();

#endif //NEURALNET_SB_OBJECTMANAGER_H
