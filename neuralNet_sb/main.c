#include "Linagb/Linagb.h"
#include "Layer/Layer.h"


void networkDeclaration() {
    // TODO: declare network layers here
    initInputLayer(4);
    addDenseLayer(newDenseLayer(
            "Hidden layer 1",
            5));
    addDenseLayer(newDenseLayer(
            "Hidden layer 2",
            6));
    addDenseLayer(newDenseLayer(
            "Hidden layer 3",
            10));
    addDenseLayer(newDenseLayer(
            "Output layer",
            10));
    // TODO: end declaration here
    finishNetwork();
    checkValidNet();
}

/**
 * Print declared network graph
 */
void networkInvestigation() {
    deepNetGraph();
}

/**
 * Execute all freeing procedures
 */
void networkEnclosure() {
    cleanList(head);
    freeNet(inputLayer);
}

Matrix *createInput(int num_sample) {
    Matrix *inputM = newMatrix("Input matrix", num_sample, inputLayer->denseLayer->num_node, 0);
    //TODO: modify inputMatrix with each row is an sample & each column is a feature

    return inputM;
}

int main() {
    networkDeclaration();
    // TODO: From here: using the declared network




    // TODO: Finish here, do not change code outside this range
    networkEnclosure();
    return 0;
}
