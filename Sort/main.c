//
//  main.c
//  Sort
//
//  Created by Tom Xing on 1/12/19.
//  Copyright © 2019 Tom Xing. All rights reserved.
//
#include "Sort.h"
#include "QSort.h"

int cmpfunc (const void * a, const void * b) {
    int t1 = * ((int*) a);
    int t2 = * ((int*) b);
    return t1 - t2;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    sqList l = {
        {2, 1, 0},
        3
    };
//    BubbleSort0(&l);
//    BubbleSort1(&l);
//    BubbleSort2(&l);
//    SelectSort(&l);
    InsertSort(&l);
//    ShellSort(&l);
    /*
    for (int i = 0; i < l.length; i++) {
        printf("%d\n", l.r[i]);
    }
     */
    
//    int a = 1;
//    int b = 2;
    
//    testVoid(&a, &b, sizeof(int));
    int arr[9] = {9, 1, 5, 8, 3, 7, 4, 6, 2};
    int arr2[3] = {2, 3, 1};
//    QSort(arr, 9, sizeof(int), cmpfunc);
//    BubbleSort3(arr, 9);
//    InsertSort2(arr, 9);
//    InsertSort2(arr2, 3);
//    QSort2(arr, 9);
//    BubbleSort5(arr, 9);
//    InsertSort3(arr, 9);
//    QSort3(arr, 9);
//    InsertSort5(arr, 9);
//    QSort5(arr, 9);
    
//    BubbleSort7(arr, 9);
//    InsertSort6(arr, 9);
    QSort7(arr, 9);
    
    for (int i = 0; i < 9; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
