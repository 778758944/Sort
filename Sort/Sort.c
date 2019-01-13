//
//  Sort.c
//  Sort
//
//  Created by Tom Xing on 1/12/19.
//  Copyright © 2019 Tom Xing. All rights reserved.
//

#include "Sort.h"

void swap(sqList * L, int i, int j) {
    int temp = L->r[i];
    L->r[i] = L->r[j];
    L->r[j] = temp;
}


void BubbleSort0(sqList * l) {
    for (int i = 0; i < l->length; i++) {
        for (int j = i + 1; j < l->length; j++) {
            if (l->r[i] > l->r[j]) {
                swap(l, i, j);
            }
        }
    }
}

void BubbleSort1(sqList * l) {
    for (int i = 0; i < l->length; i++) {
        for (int j = l->length - 2; j >= i; j--) {
            if (l->r[j] > l->r[j + 1]) {
                swap(l, j, j + 1);
            }
        }
    }
}

void BubbleSort2(sqList * l) {
    bool flag = true;
    for (int i = 0; i < l->length && flag; i++) {
        flag = false;
        for (int j = l->length - 2; j >= i; j--) {
            if (l->r[j] > l->r[j + 1]) {
                swap(l, j, j + 1);
                flag = true;
            }
        }
    }
}

void SelectSort(sqList * l) {
    int i, j, min;
    for (i = 0; i < l->length; i++) {
        min = i;
        for (j = i + 1; j < l->length; j++) {
            if (l->r[min] > l->r[j]) {
                min = j;
            }
        }
        if (min != i) {
            swap(l, i, min);
        }
    }
}

void InsertSort(sqList * l) {
    int i,j;
    for (i = 1; i < l->length; i++) {
        if (l->r[i] < l ->r[i - 1]) {
            int t = l->r[i];
            for (j = i - 1; l->r[j] > t; j--) {
                l->r[j + 1] = l->r[j];
            }
            l->r[j + 1] = t;
        }
    }
}

void ShellSort(sqList * l) {
    int i,j;
    int increment = l ->length;
    do {
        increment = increment/3 + 1;
        for (i = increment; i < l->length; i += increment) {
            if (l->r[i] < l->r[i - increment]) {
                int t = l->r[i];
                for (j = i - increment; t < l->r[j] && j >= 0; j -= increment) {
                    l->r[j + increment] = l->r[j];
                }
                l->r [j + increment] = t;
            }
        }
    }
    while (increment > 1);
}
