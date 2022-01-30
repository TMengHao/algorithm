// Created by MengHao on 2022/1/26.
#include "PrintSort.h"

using namespace std;

/*
 * [start,end]
 * */
void FormatArray(int arr[], int start, int end) {
    for (int i = start; i <= end; ++i) {
        if (i == start) printf("[");
        if (i != end) printf("%d,", arr[i]);
        else {
            printf("%d", arr[i]);
            printf("]");
        }
    }
}

int Partition(int arr[], int i, int j) {
    int temp = arr[i];
    while (i < j) {
        while (i < j && arr[j] >= temp) --j;
        if (i < j) {
            arr[i] = arr[j];
            ++i;
        }
        while (i < j && arr[i] <= temp) ++i;
        if (i < j) {
            arr[j] = arr[i];
            --j;
        }
    }
    arr[i] = temp;
    return i;
}

void PrintQuickSort(int arr[], int low, int high) {
    int overlap;
    if (low < high) {
        overlap = Partition(arr, low, high);
        PrintQuickSort(arr, low, overlap - 1);
        PrintQuickSort(arr, overlap + 1, high);
    }
    FormatArray(arr, low, high);
    printf("\n");
}

void PrintBubbleSort(int arr[], int n) {
    int i, j, flag, temp;
    printf("初始数组:");
    FormatArray(arr, 0, n - 1);
    printf("\n");
    for (i = 0; i < n - 1; ++i) {
        flag = 0;
        for (j = n - 1; j >= i + 1; --j) {
            if (arr[j] < arr[j - 1]) {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                flag = 1;
            }
        }
        printf("第%d次排序后:", i + 1);
        PrintArray(arr, i + 1);
        FormatArray(arr, i + 1, n - 1);
        printf("\n");
        if (!flag) return;
    }
}

void PrintShellSort(int arr[], int n, int inc[], int cn) {
    printf("初始数组: ");
    PrintArray(arr, n);
    printf("\n");
    for (int k = 0; k < cn; ++k) {
        int i, j, temp, ck = inc[k];
        for (i = ck; i < n; ++i) {
            if (arr[i] < arr[i - ck]) {
                temp = arr[i];
                j = i - ck;
                while (j >= 0 && temp < arr[j]) {
                    arr[j + ck] = arr[j];
                    j -= ck;
                }
                arr[j + ck] = temp;
            }
        }
        printf("增量为%d排序后: ", inc[k]);
        PrintArray(arr, n);
        printf("\n");
    }
}

void PrintInsertSort(int arr[], int n) {
    int i, j, temp;
    printf("初始数组:  ");
    FormatArray(arr, 0, 0);
    FormatArray(arr, 1, n - 1);
    printf("\n");
    for (i = 1; i <= n - 1; ++i) {
        if (arr[i] < arr[i - 1]) {
            temp = arr[i];
            for (j = i - 1; temp < arr[j]; --j) {
                arr[j + 1] = arr[j];
            }
            arr[j + 1] = temp;
        }
        printf("%d次排序后: ", i);
        FormatArray(arr, 0, i);
        FormatArray(arr, i + 1, n - 1);
        printf("\n");
    }
}

void PrintArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (i != n - 1) printf("%d,", arr[i]);
        else printf("%d", arr[i]);
    }
}

void PrintSelectSort(int arr[], int n) {
    int i, j, k, temp;
    printf("初始数组:  ");
    FormatArray(arr, 0, n - 1);
    printf("\n");
    for (i = 0; i < n - 1; ++i) {
        k = i;
        for (j = i + 1; j < n; ++j) if (arr[j] < arr[k]) k = j;
        if (k != i) {
            temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
        }
        printf("第%d次排序后:", i + 1);
        PrintArray(arr, i + 1);
        FormatArray(arr, i + 1, n - 1);
        printf("\n");
    }
}
