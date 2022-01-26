#ifndef _PRINT_SORT_H
#define _PRINT_SORT_H

#include <cstdio>

/*
 * 打印快速排序过程
 * */
void PrintQuickSort(int arr[],int low,int high);

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
 * n:数组长度(sizeof(arr)/sizeof(arr[0]))
 * */
void PrintArray(int arr[], int n);

/*
 * arr:待格式化数组(闭区间)
 * start:开始位置
 * end:结束位置
 * */
void FormatArray(int arr[], int start, int end);

#endif // !_PRINT_SORT_H