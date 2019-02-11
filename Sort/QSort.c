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

void QSort(void * arr, size_t nitems, size_t size, int (*comp)(const void *, const void *)) {
    void * high = arr + (nitems - 1) * size;
    void * low = arr;
    sort(arr, low, high, size, comp);
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
