//
// Created by MengHao on 2022/1/30.
//
#ifndef ALGORITHM_SELECT_SORT_H
#define ALGORITHM_SELECT_SORT_H
//直接选择排序

/*
 * arr:待排序数组
 * n:数组长度
 * */
void SelectSort(int arr[], int n);

void SelectSort(int arr[], int n) {
    int i, j, k, temp;
    for (i = 0; i < n - 1; ++i) {
        k = i;
        for (j = i + 1; j < n; ++j) if (arr[j] < arr[k]) k = j;
        if (k != i) {
            temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
        }
    }
}

#endif //ALGORITHM_SELECT_SORT_H
