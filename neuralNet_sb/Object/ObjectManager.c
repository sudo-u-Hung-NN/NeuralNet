//
// Created by ashitaka on 09/05/2021.
//

#include "ObjectManager.h"

void insertList(ObjectList *newObject) {
    if (head == NULL) {
        head = newObject;
    }
    else {
        ObjectList *tmp;
        for (tmp = head; tmp->next != NULL; tmp = tmp->next);
        tmp->next = newObject;
    }
}


void declareMatrix(Matrix *mt) {
    ObjectList *newObject = (ObjectList *) malloc(sizeof(ObjectList));
    newObject->type = OBJ_MATRIX;
    newObject->next = NULL;
    newObject->mt = mt;
    insertList(newObject);
}

void declareVector(Vector *vt) {
    ObjectList *newObject = (ObjectList *) malloc(sizeof(ObjectList));
    newObject->type = OBJ_VECTOR;
    newObject->next = NULL;
    newObject->vt = vt;
    insertList(newObject);
}

void deleteMatrix(Matrix *mt) {
    if (head->mt->name == mt->name || head->mt->ncol == mt->ncol || head->mt->nrow == mt->nrow) {
        ObjectList *tmp = head->next;
        freeMatrix(head->mt);
        free(head);
        head = tmp;
        return;
    }

    Matrix *curr;
    for (ObjectList *tmp = head; tmp->next != NULL ; tmp = tmp->next) {
        curr = tmp->next->mt;
        if (curr->name == mt->name || curr->ncol == mt->ncol || curr->nrow == mt->nrow) {
            ObjectList *tmp2 = tmp->next->next;
            freeMatrix(tmp->next->mt);
            free(tmp->next);
            tmp->next = tmp2;
            return;
        }
    }
}

void cleanList(ObjectList *tmp) {
    if (tmp->next != NULL) {
        cleanList(tmp->next);
    }
    switch (tmp->type) {
        case OBJ_VECTOR:
            if (!MODE) {
                printf("Free %s......", tmp->vt->name);
            }
            freeVector(tmp->vt);
            free(tmp);
            if (!MODE) {
                printf("done\n");
            }
            break;
        case OBJ_MATRIX:
            if (!MODE) {
                printf("Free %s......", tmp->mt->name);
            }
            freeMatrix(tmp->mt);
            free(tmp);
            if (!MODE) {
                printf("done\n");
            }
            break;
        default:
            break;
    }
}

void printList() {
    if (head == NULL) {
        error(ERROR_LISTHEAD_NULL, "printList", "ObjectManager.c");
    }

    ObjectList *tmp;
    int count = 0;
    for (tmp = head; tmp != NULL; tmp = tmp->next) {
        ++count;
        printf("Object #%d\n", count);
        switch (tmp->type) {
            case OBJ_VECTOR:
                printVector(tmp->vt);
                break;
            case OBJ_MATRIX:
                printMatrix(tmp->mt);
                break;
            default:
                error(ERROR_UNASSIGNED_TYPE_OBJ, "printList", "ObjectManager.c");
                break;
        }
    }
}