//
// Created by ashitaka on 09/05/2021.
//

#ifndef NEURALNET_SB_DENSELAYER_H
#define NEURALNET_SB_DENSELAYER_H

#include "../../Object/ObjectManager.h"
#include "../../ExceptionHandling/error.h"
#include "../../Linagb/Linagb.h"
#include "../Activation/SigmoidActivationLayer.h"
#include "../Activation/ReluActivationLayer.h"


typedef struct DenseLayer DenseLayer;
struct DenseLayer {
    char* name;
    int num_node;

    Matrix *weights;
    Matrix *bias;
    Matrix *gradient;
};

DenseLayer *newDenseLayer(char *name, int num_node);
void forwardLayer(DenseLayer *currentDense, Matrix *input);

#endif //NEURALNET_SB_DENSELAYER_H
