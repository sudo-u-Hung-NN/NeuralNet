#include "Linagb/Linagb.h"
#include "Layer/Layer.h"

int main() {
    initInputLayer(4);

    addDenseLayer(
            newDenseLayer(
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
    deepNetGraph();
    checkValidNet();

    cleanList(head);
    return 0;
}
