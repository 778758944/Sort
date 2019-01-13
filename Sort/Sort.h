//
//  Sort.h
//  Sort
//
//  Created by Tom Xing on 1/12/19.
//  Copyright © 2019 Tom Xing. All rights reserved.
//

#ifndef Sort_h
#define Sort_h

#include <stdio.h>
#include <stdbool.h>
#define MAXSIZE 10

typedef struct {
    int r[MAXSIZE];
    int length;
} sqList;

void swap(sqList * L, int i, int j);
void BubbleSort0(sqList * l);
void BubbleSort1(sqList * l);
void BubbleSort2(sqList * l);
void SelectSort(sqList * l);
void InsertSort(sqList * l);
void ShellSort(sqList * l);

#endif /* Sort_h */
