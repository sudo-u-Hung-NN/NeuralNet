#include "Linagb/Linagb.h"
#include "Layer/Layer.h"


void networkDeclaration() {
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
    finishNetwork();
}

void networkInvestigation() {
//    deepNetGraph();
    checkValidNet();
}

void networkEnclosure() {
    cleanList(head);
    freeNet(inputLayer);
}

int main() {
    networkDeclaration();
    networkInvestigation();
    networkEnclosure();
    return 0;
}
