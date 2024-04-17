#include "vector.h"
#include "/Users/denzl/CLionProjects/2sem/19.14/lab_14/libs/data_structures/exceptions/exceptions.h"


vector createVector(size_t n){
    vector new;
    if (n == 0){
        new.data = NULL;
    } else {
        new.data = (int *) malloc(n * sizeof(int));
        exceptBadAlloc(new);
    }

    new.size = 0;
    new.capacity = n;

    return new;
}


void reserve(vector *v, size_t newCapacity){
    if (newCapacity == 0){
        v->data = NULL;
    } else {
        v->data = (int *)realloc(v->data, sizeof(int) * newCapacity);
        exceptBadAlloc(*v);
    }

    v->size = v->size > newCapacity ? newCapacity : v->size;
    v->capacity = newCapacity;
}

void clear(vector *v){
    v->size = 0;
}


void shrinkToFit(vector *v){
    if (v->capacity > v->size){
        v->data = (int *)realloc(v->data, sizeof(int) * v->size);
        v->capacity = v->size;
    }
}


void deleteVector(vector *v){
    free(v->data);
    v->data = NULL;
    v->size = 0;
    v->capacity = 0;
}


bool isEmpty(vector *v){
    return v->size == 0;
}


bool isFull(vector *v){
    return v->size == v->capacity;
}


void pushBack(vector *v, int x){
    if (!v->capacity){
        reserve(v, 1);
    } else if (v->size == v->capacity){
        reserve(v, v->capacity * 2);
    }

    v->data[v->size++] = x;
}


void popBack(vector *v) {
    exceptEmptyVector(*v);
    v->size--;
}


int getVectorValue(vector *v, size_t i){
    return v->data[i];
}


int* atVector(vector *v, size_t index){
    exceptIndexError(*v, index);

    return v->data + index;
}


int* back(vector *v){
    return &v->data[v->size > 0 ? v->size - 1 : 0];
}


int* front(vector *v){
    return &v->data[0];
}