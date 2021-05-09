//
// Created by ashitaka on 09/05/2021.
//

#ifndef NEURALNET_SB_LAYER_H
#define NEURALNET_SB_LAYER_H

#include "../Object/ObjectManager.h"
#include "../ExceptionHandling/error.h"
#include "../Linagb/Linagb.h"

#include "DenseLayer/DenseLayer.h"
#include "SoftmaxLayer/SoftmaxLayer.h"

#include "Activation/SigmoidActivationLayer.h"
#include "Activation/ReluActivationLayer.h"

enum LayerType{
    DENSE_LAYER,
    SOFTMAX_LAYER
};

typedef struct Layer Layer;
struct Layer {
    char* name;
    int id;
    enum LayerType typeLayer;

    union {
        DenseLayer *denseLayer;
        SoftmaxLayer *softmaxLayer;
    };

    Layer *next;
    Layer *prev;
};

int numlayer;
Layer *inputLayer;
Layer *lastLayer;

void initInputLayer(const int num_node);
void addDenseLayer(DenseLayer *denseLayer);
void addSoftmaxLayer(SoftmaxLayer *softmaxLayer);

void finishNetwork();
void checkValidNet();

void deepNetGraph();

#endif //NEURALNET_SB_LAYER_H
