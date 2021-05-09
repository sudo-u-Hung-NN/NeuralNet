cmake_minimum_required(VERSION 3.19)
project(neuralNet_sb C)

set(CMAKE_C_STANDARD 99)

add_executable(neuralNet_sb main.c
        Matrix/Matrix.h Matrix/Matrix.c
        Linagb/Linagb.h Linagb/Linagb.c
        ExceptionHandling/error.h ExceptionHandling/error.c
        Vector/Vector.h Vector/Vector.c

        Object/ObjectManager.c Object/ObjectManager.h
        Layer/DenseLayer/DenseLayer.c Layer/DenseLayer/DenseLayer.h
        Layer/Activation/SigmoidActivationLayer.c Layer/Activation/SigmoidActivationLayer.h
        Layer/SoftmaxLayer/SoftmaxLayer.c Layer/SoftmaxLayer/SoftmaxLayer.h
        Layer/Layer.c Layer/Layer.h
        Layer/Activation/ReluActivationLayer.c Layer/Activation/ReluActivationLayer.h)

target_link_libraries(neuralNet_sb PRIVATE m)