//
// Created by ashitaka on 09/05/2021.
//

#include "DenseLayer.h"

DenseLayer *newDenseLayer(char* name, int num_node) {
    DenseLayer *newdense = (DenseLayer *) malloc(sizeof(DenseLayer));
    newdense->name = (char*) malloc(MAX_NAME_LEN * sizeof(char ));
    strcpy(newdense->name, name);
    newdense->num_node = num_node;
    return newdense;
};

void forwardLayer(Matrix *input) {

};
