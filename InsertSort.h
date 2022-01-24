#ifndef _INSERT_SORT_H
#define _INSERT_SORT_H

#include <cstdio>

void InsertSort(int arr[], int len);
void PrintSort(int arr[], int start, int end);

void InsertSort(int arr[], int n) {
	int i, j, temp;
	printf("初始数组：\t");
	PrintSort(arr, 0, n - 1);
	printf("\n");
	for (i = 1; i <= n - 1; ++i) {
		if (arr[i] < arr[i - 1]) {
			temp = arr[i];
			for (j = i - 1; temp < arr[j]; --j) {
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
		printf("%d次排序后结果为：",i);
		PrintSort(arr, 0, n - 1);
		printf("\n");
	}
}
void PrintSort(int arr[], int start, int end) {
	for (int i = start; i <= end; ++i) {
		printf("%d\t", arr[i]);
	}
}
#endif // !_INSERT_SORT_H

