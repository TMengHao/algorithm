//
// Created by MengHao on 2022/1/30.
//
#ifndef ALGORITHM_HEAPSORT_H
#define ALGORITHM_HEAPSORT_H
//堆排序

/*
 * arr:待排序数组(大根堆排序)
 * n:数组长度[0,n)
 * */
void BigHeapSort(int arr[], int n);

/*
 * arr:待排序数组(小根堆排序)
 * n:数组长度[0,n)
 * */
void SmallHeapSort(int arr[], int n);

/*
 * [i,h]建大根堆
 * */
void BigSift(int arr[], int i, int h);

/*
 * [i,h]建小根堆
 * */
void SmallSift(int arr[], int i, int h);

void BigHeapSort(int arr[], int n) {
    int i, temp;
    for (i = n / 2 - 1; i >= 0; --i) {
        BigSift(arr, i, n - 1);
    }
    for (i = n - 1; i > 0; --i) {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        BigSift(arr, 0, i - 1);
    }
}

void SmallHeapSort(int arr[], int n) {
    int i, temp;
    for (i = n / 2 - 1; i >= 0; --i) {
        SmallSift(arr, i, n - 1);
    }
    for (i = n - 1; i > 0; --i) {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        SmallSift(arr, 0, i - 1);
    }
}

void BigSift(int arr[], int i, int h) {
    int j = 2 * i + 1, x = arr[i];
    while (j <= h) {
        if (j < h && arr[j] < arr[j + 1]) ++j;
        if (x >= arr[j]) break;
        arr[i] = arr[j];
        i = j;
        j = 2 * i + 1;
    }
    arr[i] = x;
}

void SmallSift(int arr[], int i, int h) {
    int j = 2 * i + 1, x = arr[i];
    while (j <= h) {
        if (j < h && arr[j] > arr[j + 1]) ++j;
        if (x <= arr[j]) break;
        arr[i] = arr[j];
        i = j;
        j = 2 * i + 1;
    }
    arr[i] = x;
}

#endif //ALGORITHM_HEAPSORT_H
