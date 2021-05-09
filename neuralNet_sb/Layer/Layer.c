//
// Created by ashitaka on 09/05/2021.
//

#include "Layer.h"

void initInputLayer(const int num_node) {
    ++numlayer;
    inputLayer = (Layer *) malloc(sizeof(Layer));
    inputLayer->id = numlayer;
    inputLayer->prev = NULL;
    inputLayer->next = NULL;
    inputLayer->name = (char *) malloc(MAX_NAME_LEN * sizeof(char));
    strcpy(inputLayer->name, "Input Layer");
    inputLayer->denseLayer = newDenseLayer(inputLayer->name ,num_node);
    inputLayer->typeLayer = DENSE_LAYER;
    lastLayer = inputLayer;
}

Layer *newLayer(char* name){
    Layer *newLayer = (Layer *) malloc(sizeof(Layer));
    ++numlayer;
    newLayer->id = numlayer;
    newLayer->prev = NULL;
    newLayer->next = NULL;
    newLayer->name = (char *) malloc(MAX_NAME_LEN * sizeof(char));
    strcpy(newLayer->name, name);

    return newLayer;
}

void addDenseLayer(DenseLayer *denseLayer) {
    if (inputLayer == NULL) {
        error(ERROR_NULL_INPUT_LAYER, "addDenseLayer", "Layer.c");
    }
    Layer *new = newLayer(denseLayer->name);
    new->typeLayer = DENSE_LAYER;
    new->denseLayer = denseLayer;
    lastLayer->next = new;
    new->prev = lastLayer;
    lastLayer = new;
}

void addSoftmaxLayer(SoftmaxLayer *softmaxLayer) {
    if (inputLayer == NULL) {
        error(ERROR_NULL_INPUT_LAYER, "addDenseLayer", "Layer.c");
    }
    Layer *new = newLayer("Softmax");
    new->typeLayer = SOFTMAX_LAYER;
    new->softmaxLayer = softmaxLayer;
    lastLayer->next = new;
    new->prev = lastLayer;
    lastLayer = new;
}

void finishNetwork() {
    for (Layer *tmp = inputLayer; tmp->next != NULL; tmp = tmp->next) {
        int current_layer_node;
        int next_layer_node;

        switch (tmp->next->typeLayer) {
            case DENSE_LAYER:
                next_layer_node = tmp->next->denseLayer->num_node;
                break;
            case SOFTMAX_LAYER:
                next_layer_node = tmp->next->softmaxLayer->num_node;
                break;
            default:
                error(ERROR_INVALID_LAYER_TYPE, "finishNetwork", "Layer.c");
                break;
        }

        switch (tmp->typeLayer) {
            case DENSE_LAYER:
                current_layer_node = tmp->denseLayer->num_node;
                // Initialize weights and bias for current Layer
                char name[MAX_NAME_LEN] = "";
                tmp->denseLayer->weights = newMatrix(strcat(strcat(name, tmp->name), "'s weights"), next_layer_node, current_layer_node, 0.5);
                strcpy(name, "");
                tmp->denseLayer->bias = newMatrix(strcat(strcat(name, tmp->name), "'s bias"), next_layer_node, 1, 0.5);
                break;
            case SOFTMAX_LAYER:
                current_layer_node = tmp->softmaxLayer->num_node;
                error(WARNING_NOT_SUPPORTED, "finishNetWork", "Layer.c");
                break;
            default:
                error(ERROR_INVALID_LAYER_TYPE, "finishNetwork", "Layer.c");
                break;
        }
    }
}

void checkValidNet(){
    for (Layer *tmp = inputLayer;  tmp->next != NULL; tmp = tmp->next) {
        switch (tmp->typeLayer) {
            case DENSE_LAYER:
                if (tmp->denseLayer->weights == NULL || tmp->denseLayer->bias == NULL ) {
                    printf("Not initialized matrices in layer %s\n", tmp->name);
                    exit(0);
                }
                else {
                    printf("%d.%s\n", tmp->id, tmp->name);
                    printMatrix(tmp->denseLayer->weights);
                    printMatrix(tmp->denseLayer->bias);
                }
                break;
            case SOFTMAX_LAYER:
                error(WARNING_NOT_SUPPORTED, "checkValidNet", "Layer.c");
                break;
            default:
                error(ERROR_INVALID_LAYER_TYPE, "finishNetwork", "Layer.c");
                break;
        }
    }
}

void deepNetGraph() {
    for (Layer *tmp = inputLayer;  tmp != NULL; tmp = tmp->next) {
        printf("{id:%d} %s \n", tmp->id, tmp->name);
    }
}
