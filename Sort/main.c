//
//  main.c
//  Sort
//
//  Created by Tom Xing on 1/12/19.
//  Copyright © 2019 Tom Xing. All rights reserved.
//
#include "Sort.h"

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
    
    for (int i = 0; i < l.length; i++) {
        printf("%d\n", l.r[i]);
    }
    
    return 0;
}
