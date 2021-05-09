//
// Created by ashitaka on 09/05/2021.
//

#ifndef NEURALNET_SB_SOFTMAXLAYER_H
#define NEURALNET_SB_SOFTMAXLAYER_H

#include "../../Linagb/Linagb.h"

typedef struct SoftmaxLayer SoftmaxLayer;
struct SoftmaxLayer {
    int num_node;
};

SoftmaxLayer *newSoftmaxLayer();

#endif //NEURALNET_SB_SOFTMAXLAYER_H
