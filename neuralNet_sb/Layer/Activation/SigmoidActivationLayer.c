//
// Created by ashitaka on 09/05/2021.
//

#include "SigmoidActivationLayer.h"
#include "math.h"

double sigmoid(double x) {
    return 1/(1 + exp(-x));
}

void passSigmoid(Matrix *input) {
    for (int i = 0; i < input->nrow; ++i) {
        for (int j = 0; j < input->ncol; ++j) {
            input->data[i][j] = sigmoid(input->data[i][j]);
        }
    }
};
