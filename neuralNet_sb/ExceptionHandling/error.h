//
// Created by ashitaka on 08/05/2021.
//

#ifndef NEURALNET_SB_ERROR_H
#define NEURALNET_SB_ERROR_H
#include "stdio.h"
typedef enum {
    ERROR_INVALID_SIZE,
    ERROR_INVALID_SHAPE,
    ERROR_TOOLONG_NAME,
    ERROR_INVALID_SIZE_CONCAT,
    ERROR_LISTHEAD_NULL,
    ERROR_UNASSIGNED_TYPE_OBJ,
    ERROR_NULL_OBJ_PRINT,
    ERROR_NULL_INPUT_LAYER,
    ERROR_INVALID_LAYER_TYPE,

    WARNING_NOT_SUPPORTED
}ErrorCode;

#define ERROR_INVALID_SIZE_MSS "Invalid vector size"
#define ERROR_INVALID_SHAPE_MSS "Invalid matrix shape"
#define ERROR_TOOLONG_NAME_MSS "Too long name!"
#define ERROR_INVALID_SIZE_CONCAT_MSS "Invalid matrix size concat"
#define ERROR_LISTHEAD_NULL_MSS "List Object with NULL header"
#define ERROR_UNASSIGNED_TYPE_OBJ_MSS "This Object does not have type"
#define ERROR_NULL_OBJ_PRINT_MSS "Print NULL object"
#define ERROR_NULL_INPUT_LAYER_MSS "Input Layer must be initialized first!"
#define ERROR_INVALID_LAYER_TYPE_MSS "Invalid layer type!"
#define WARNING_NOT_SUPPORTED_MSS "Warning, this layer is not supported"

void error(ErrorCode error, char* function_name, char* filename);

#endif //NEURALNET_SB_ERROR_H
