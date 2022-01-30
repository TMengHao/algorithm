#ifndef _PRINT_SORT_H
#define _PRINT_SORT_H

#include <bits/stdc++.h>

/*
 * 打印堆排序过程
 * */
void PrintHeapSort(int arr[], int n);

/*
 * 打印直接选择排序过程
 * */
void PrintSelectSort(int arr[], int n);

/*
 * 打印快速排序过程
 * */
void PrintQuickSort(int arr[], int low, int high);

/*
 * 打印直接插入排序过程
 * */
void PrintInsertSort(int arr[], int n);

/*
 * 打印希尔排序过程
 * */
void PrintShellSort(int arr[], int n, int inc[], int cn);

/*
 * 打印冒泡排序过程
 * */
void PrintBubbleSort(int arr[], int n);

/*
 * arr:待输出数组
 * n:数组长度[0,n)
 * */
void PrintArray(int arr[], int n);

#endif // !_PRINT_SORT_H