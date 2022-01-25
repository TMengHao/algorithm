#ifndef _INSERT_SORT_H
#define _INSERT_SORT_H
//直接插入排序

/*
	arr:待排序数组
	n:数组长度
*/
void InsertSort(int arr[], int n);

void InsertSort(int arr[], int n) {
	int i, j, temp;
	for (i = 1; i <= n - 1; ++i) {
		if (arr[i] < arr[i - 1]) {
			temp = arr[i];
			for (j = i - 1; temp < arr[j]; --j) {
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
	}
}
#endif // !_INSERT_SORT_H

