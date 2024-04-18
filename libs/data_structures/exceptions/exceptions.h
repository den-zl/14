#ifndef LAB_14_EXCEPTIONS_H
#define LAB_14_EXCEPTIONS_H


#include "/Users/denzl/CLionProjects/2sem/19.14/lab_14/libs/data_structures/vector/vector.h"
#include "/Users/denzl/CLionProjects/2sem/19.14/lab_14/libs/data_structures/vector/vectorVoid.h"

// ошибка нехватки памяти
void exceptBadAlloc();

// ошибка - вектор пустой
void exceptEmptyVector();

// ошибка ненайденного элемента
void exceptIndexError();

// ошибка нехватки памяти
void exceptBadAllocV(vectorVoid v);

// ошибка ненайденного элемента
void exceptIndexErrorV(vectorVoid v, const size_t index);

// ошибка - вектор пустой
void exceptEmptyVectorV(vectorVoid v);


#endif //LAB_14_EXCEPTIONS_H
