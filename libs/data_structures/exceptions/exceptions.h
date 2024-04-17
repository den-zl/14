#ifndef LAB_14_EXCEPTIONS_H
#define LAB_14_EXCEPTIONS_H

#include "/Users/denzl/CLionProjects/2sem/19.14/lab_14/libs/data_structures/vector/vector.h"

// ошибка нехватки памяти
void exceptBadAlloc(vector v);

// ошибка ненайденного элемента
void exceptIndexError(vector v, const size_t index);

// ошибка - вектор пустой
void exceptEmptyVector(vector v);


#endif //LAB_14_EXCEPTIONS_H
