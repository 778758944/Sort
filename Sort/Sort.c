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

void BubbleSort3(int *arr, int len) {
    bool flag = true;
    for (int i = 0; i < len && flag; i++) {
        flag = false;
        for (int j = len - 2; j >= i; j--) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
            }
        }
    }
}


void InsertSort2(int *arr, int len) {
    for (int i = 1; i < len; i++) {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0 && temp < arr[j]; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
}

int QSortPartion(int * arr, int low, int high) {
    int temp = arr[low];
    while (low < high) {
        while (low < high && temp < arr[high]) {
            high--;
        }
        arr[low] = arr[high];
        
        while (low < high && temp > arr[low]) {
            low++;
        }
        
        arr[high] = arr[low];
    }
    
    arr[low] = temp;
    return low;
}

void QSortHelper(int * arr, int low, int high) {
    while (low < high) {
        int p = QSortPartion(arr, low, high);
        QSortHelper(arr, low, p - 1);
        low = p + 1;
    }
}

void QSort2(int * arr, int len) {
    int low = 0;
    int high = len - 1;
    QSortHelper(arr, low, high);
}

void BubbleSort5(int *arr, int len) {
    int flag = true;
    for (int i = 0; i < len && flag; i++) {
        flag = false;
        for (int j = len - 2; j >= i; j--) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
            }
        }
    }
}

void InsertSort3(int *arr, int len) {
    for (int i = 1; i < len; i++) {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >=0 && temp < arr[j]; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
}


int QSortPartition3(int * arr, int low, int high) {
    int temp = arr[low];
    while (low < high) {
        while (low < high && arr[high] > temp) {
            high--;
        }
        arr[low] = arr[high];
        
        while (low < high && arr[low] < temp) {
            low++;
        }
        
        arr[high] = arr[low];
    }
    
    arr[high] = temp;
    return low;
    
}

void QSortHelper3(int * arr, int low, int high) {
    while (low < high) {
        // Every element in left of p is smaller than arr[p]
        // Every element in right of p is bigger than arr[p]
        int p = QSortPartition3(arr, low, high);
        QSortHelper3(arr, low, p - 1);
        low = p + 1;
    }
}

void QSort3(int * arr, int len) {
    QSortHelper3(arr, 0, len - 1);
}


void BubbleSort6(int * arr, int len) {
    bool flag = true;
    for (int i = 0; i < len && flag; i++) {
        flag = false;
        for (int j = len - 2; j >= i; j--) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                flag = true;
            }
        }
    }
}


void InsertSort5(int * arr, int len) {
    int i, j;
    for (i = 1; i < len; i++) {
        int t = arr[i];
        for (j = i - 1; j >= 0 && t < arr[j]; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = t;
    }
}

int QSortPartition5(int * arr, int low, int high) {
    int t = arr[low];
    while (low < high) {
        while (low < high && arr[high] > t) {
            high--;
        }
        arr[low] = arr[high];
        
        while (low < high && arr[low] < t) {
            low++;
        }
        
        arr[high] = arr[low];
    }
    
    arr[low] = t;
    return low;
}

void QSortHelper5(int * arr, int low, int high) {
    while (low < high) {
        int po = QSortPartition5(arr, low, high);
        QSortHelper5(arr, low, po - 1);
        low = po + 1;
    }
}


void QSort5(int * arr, int len) {
    QSortHelper5(arr, 0, len - 1);
}

void BubbleSort7(int * arr, int len) {
    bool flag = true;
    for (int i = 0; i < len && flag; i++) {
        bool flag = false;
        for (int j = len - 2; j >= i; j--) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                flag = true;
            }
        }
    }
}


void InsertSort6(int * arr, int len) {
    for (int i = 1; i < len; i++) {
        int t = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (t >= arr[j]) break;
            // the key point
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = t;
    }
}


int QsortHelper6(int * arr, int low, int high) {
    int p = arr[low];
    while (low < high) {
        while (low < high && arr[high] > p) {
            high--;
        }
        
        arr[low] = arr[high];
        
        while (low < high && arr[low] < p) {
            low++;
        }
        
        arr[high] = arr[low];
    }
    arr[low] = p;
    
    return low;
}

void QSortHelperer6(int * arr, int low, int high) {
    while (low <= high) {
        int t = QsortHelper6(arr, low, high);
        QSortHelperer6(arr, low, t - 1);
        low = t + 1;
    }
}


void QSort6(int * arr, int len) {
    QSortHelperer6(arr, 0, len - 1);
}


int QSortHelperer7(int * arr, int low, int high) {
    int p = arr[low];
    while (low < high) {
        while (low < high && arr[high] > p) {
            high--;
        }
        
        arr[low] = arr[high];
        
        while (low < high && arr[low] < p) {
            low++;
        }
        
        arr[high] = arr[low];
    }
    
    arr[low] = p;
    return low;
}


void QSortHelper7(int * arr, int low, int high) {
    while (low < high) {
        // pvt is the position where left elements are smaller than it and right elements are bigger;
        int pvt = QSortHelperer7(arr, low, high);
        QSortHelper7(arr, low, pvt - 1);
        low = pvt + 1;
    }
}


void QSort7(int * arr, int len) {
    QSortHelper7(arr, 0 , len - 1);
}





