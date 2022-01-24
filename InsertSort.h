#ifndef _INSERT_SORT_H
#define _INSERT_SORT_H

#include <bits/stdc++.h>

void InsertSort(int arr[], int n);
void PrintSort(int arr[], int start, int end);

void InsertSort(int arr[], int n) {
	int i, j, temp;
	printf("��ʼ������Ϊ:\t");
	PrintSort(arr,0,0);PrintSort(arr,1,n-1);  
	printf("\n");
	for (i = 1; i <= n - 1; ++i) {
		if (arr[i] < arr[i - 1]) {
			temp = arr[i];
			for (j = i - 1; temp < arr[j]; --j) {
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
		printf("%d�������:\t",i);
		PrintSort(arr,0,i);PrintSort(arr,i+1,n-1);
		printf("\n");
	}
}
void PrintSort(int arr[], int start, int end) {
	for (int i = start; i <= end; ++i) {
		if(i == start) printf("[");
		if(i != end) printf("%d,", arr[i]);
		if(i == end){
			printf("%d", arr[i]);
			printf("]");
		}
	}
}
#endif // !_INSERT_SORT_H

