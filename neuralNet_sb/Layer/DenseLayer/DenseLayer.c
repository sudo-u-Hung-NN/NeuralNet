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

/**
 * currentDense layer has weight matrix of (num_output, num_input)
 * also, bias matrix of (num_output, 1)
 * output Matrix is a matrix of (num_example, num_output)
 * @param inputM : Matrix of (num_example, num_input)
 *
 * FORMULA:               OutputM = InputM dot WeightM + BiasM
 *      (num_example, num_output) = (num_example, num_input) dot (num_output, num_input)T + (num_output, 1)
 */
void forwardLayer(DenseLayer *currentDense, Matrix *input) {
    Matrix *T = transpose(currentDense->weights);
    Matrix *D = mDot(input, T);
    Matrix *tmp = input;

    input = mSum(D, currentDense->bias);

    deleteMatrix(T);
    deleteMatrix(D);
    deleteMatrix(tmp);
};
