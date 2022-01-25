#ifndef _PRINT_SORT_H
#define _PRINT_SORT_H

#include <cstdio>

/*
	arr:待输出数组
	n:数组长度(sizeof(arr)/sizeof(arr[0]))
*/
void PrintArray(int arr[], int n);
/*
	arr:待格式化数组(闭区间)
	start:开始位置
	end:结束位置
*/
void FormatArray(int arr[], int start, int end);
/*
	arr:原数组
	n:数组长度
	打印直接插入排序过程
*/
void PrintInsertSort(int arr[], int n);


void PrintArray(int arr[], int n) {
	for (int i = 0; i < n; ++i) {
		printf("%d\t", arr[i]);
	}
}
void FormatArray(int arr[], int start, int end) {
	for (int i = start; i <= end; ++i) {
		if (i == start) printf("[");
		if (i != end) printf("%d,", arr[i]);
		if (i == end) {
			printf("%d", arr[i]);
			printf("]");
		}
	}
}
void PrintInsertSort(int arr[], int n) {
	int i, j, temp;
	printf("初始化数据：");
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
#endif // !_PRINT_SORT_H

