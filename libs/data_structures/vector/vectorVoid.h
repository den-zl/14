#ifndef LAB_14_VECTORVOID_H
#define LAB_14_VECTORVOID_H


#include <limits.h>
#include <stdio.h>

typedef struct vectorVoid {
    void *data; // указатель на нулевой элемент вектора
    size_t size; // размер вектора
    size_t capacity; // вместимость вектора
    size_t baseTypeSize; // размер базового типа:
} vectorVoid;


#endif //LAB_14_VECTORVOID_H
