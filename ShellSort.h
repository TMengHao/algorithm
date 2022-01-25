#ifndef _SHELL_SORT_H
#define _SHELL_SORT_H
//希尔排序

/*
	arr:待排序数组
	n:待排序数组长度
	inc:增量数组(最后一位必须为1)
	cn:增量数组长度
*/
void ShellSort(int arr[], int n, int inc[], int cn);
/*
	arr:待排序数组
	ck:当前增量
	n:待排序数组长度
*/
void ShellInsert(int arr[], int ck, int n);

void ShellSort(int arr[], int n, int inc[], int cn) {
	for (int i = 0; i < cn; ++i) {
		ShellInsert(arr, inc[i], n);
	}
}
void ShellInsert(int arr[], int ck, int n) {
	int i, j, temp;
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
}
#endif // !_SHELL_INSERT_H
