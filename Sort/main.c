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
        {9, 1, 5, 8, 3, 7, 4, 6, 2},
        9
    };
//    BubbleSort0(&l);
//    BubbleSort1(&l);
//    BubbleSort2(&l);
//    SelectSort(&l);
//    InsertSort(&l);
    ShellSort(&l);
    /*
    for (int i = 0; i < l.length; i++) {
        printf("%d\n", l.r[i]);
    }
     */
    
//    int a = 1;
//    int b = 2;
    
//    testVoid(&a, &b, sizeof(int));
    int arr[9] = {9, 1, 5, 8, 3, 7, 4, 6, 2};
    QSort(arr, 9, sizeof(int), cmpfunc);
    
    for (int i = 0; i < 9; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
