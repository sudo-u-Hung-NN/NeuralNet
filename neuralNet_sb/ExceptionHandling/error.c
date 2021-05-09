//
// Created by ashitaka on 08/05/2021.
//

#include "error.h"
#include "stdlib.h"

void error(ErrorCode error, char* function_name, char* filename) {
    switch (error) {
        case ERROR_INVALID_SHAPE:
            printf("%s in function <%s> in file [%s]\n", ERROR_INVALID_SHAPE_MSS, function_name, filename);
            break;
        case ERROR_INVALID_SIZE:
            printf("%s in function <%s> in file [%s]\n", ERROR_INVALID_SIZE_MSS, function_name, filename);
            break;
        case ERROR_TOOLONG_NAME:
            printf("%s in function <%s> in file [%s]\n", ERROR_TOOLONG_NAME_MSS, function_name, filename);
            break;
        case ERROR_INVALID_SIZE_CONCAT:
            printf("%s in function <%s> in file [%s]\n", ERROR_INVALID_SIZE_CONCAT_MSS, function_name, filename);
            break;
        case ERROR_LISTHEAD_NULL:
            printf("%s in function <%s> in file [%s]\n", ERROR_LISTHEAD_NULL_MSS, function_name, filename);
            break;
        case ERROR_UNASSIGNED_TYPE_OBJ:
            printf("%s in function <%s> in file [%s]\n", ERROR_UNASSIGNED_TYPE_OBJ_MSS, function_name, filename);
            break;
        case ERROR_NULL_OBJ_PRINT:
            printf("%s in function <%s> in file [%s]\n", ERROR_NULL_OBJ_PRINT_MSS, function_name, filename);
            break;
        case ERROR_NULL_INPUT_LAYER:
            printf("%s in function <%s> in file [%s]\n", ERROR_NULL_INPUT_LAYER_MSS, function_name, filename);
            break;
        case ERROR_INVALID_LAYER_TYPE:
            printf("%s in function <%s> in file [%s]\n", ERROR_INVALID_LAYER_TYPE_MSS, function_name, filename);
            break;

        case WARNING_NOT_SUPPORTED:
            printf("%s in function <%s> in file [%s]\n", WARNING_NOT_SUPPORTED_MSS, function_name, filename);
            break;
        default:
            break;
    }
    exit(-1);
}