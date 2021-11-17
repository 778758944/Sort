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

void BubbleSort3(int *arr, int len);
void InsertSort2(int *arr, int len);

void QSort2(int * arr, int len);

void BubbleSort5(int *arr, int len);
void InsertSort3(int *arr, int len);

void QSort3(int * arr, int len);

void BubbleSort6(int * arr, int len);
void InsertSort5(int * arr, int len);

void QSort5(int * arr, int len);

void BubbleSort7(int * arr, int len);
void InsertSort6(int * arr, int len);
void QSort6(int * arr, int len);
void QSort7(int * arr, int len);

#endif /* Sort_h */
