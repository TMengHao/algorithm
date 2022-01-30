﻿#ifndef _PRINT_SORT_H
#define _PRINT_SORT_H

#include <bits/stdc++.h>

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

#endif // !_PRINT_SORT_H