#ifndef _BUBBLE_SORT_H
#define _BUBBLE_SORT_H
//ð������

/*
	arr:����������
	n:���鳤��
*/
void BubbleSort(int arr[], int n);

void BubbleSort(int arr[], int n) {
	int i, j, flag, temp;
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
		if (!flag) return;
	}
}
#endif // !_BUBBLE_SORT_H

