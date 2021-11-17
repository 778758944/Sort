//
//  QSort.c
//  Sort
//
//  Created by WENTAO XING on 2019/2/11.
//  Copyright © 2019 Tom Xing. All rights reserved.
//

#include "QSort.h"
void * Partition(void * arr, void * low, void * high, size_t size, int (*comp)(const void *, const void *));

void assign(void * a, void * b, size_t size);

void sort(void * arr, void * low, void * high, size_t size, int (*comp)(const void *, const void *));

void insert(void * arr, size_t nitems, size_t size, int (*comp) (const void *, const void *));

void QSort(void * arr, size_t nitems, size_t size, int (*comp)(const void *, const void *)) {
    void * high = arr + (nitems - 1) * size;
    void * low = arr;
    sort(arr, low, high, size, comp);
//    insert(arr, nitems, size, comp);
}


void sort(void * arr, void * low, void * high, size_t size, int (*comp)(const void *, const void *)) {
    while (low < high) {
        void * p = Partition(arr, low, high, size, comp);
        sort(arr, low, p - size, size, comp);
        low = p + size;
    }
}


void * Partition(void * arr, void * low, void * high, size_t size, int (*comp)(const void *, const void *)) {
    void * temp = calloc(1, size);
    assign(temp, low, size);
    while (low < high) {
        while (low < high && (*comp)(temp, high) <= 0) {
            high -= size;
        }
        assign(low, high, size);
        
        while (low < high && (*comp)(temp, low) >= 0) {
            low += size;
        }
        assign(high, low, size);
    }
    
    assign(low, temp, size);
    return low;
}

void assign(void * a, void * b, size_t size) {
    char * _a = a;
    char * _b = b;
    int i = 0;
    for (; i < size; i++) {
        *(_a + i) = *(_b + i);
    }
}

void insert(void * arr, size_t nitems, size_t size, int (*comp) (const void *, const void *)) {
    int i, j;
    for (i = 1; i < nitems; i++) {
        void * cur = arr + (i * size);
        void * before = arr + (i - 1) * size;
        
        if (comp(before, cur) > 0) {
            void * temp = calloc(1, size);
            assign(temp, cur, size);
            for (j = i - 1; j >= 0 && comp(arr + j * size, temp) > 0; j--) {
                assign(arr + (j + 1) * size, arr + j * size, size);
            }
            assign(arr + (j + 1) * size, temp, size);
        }
    }
}
