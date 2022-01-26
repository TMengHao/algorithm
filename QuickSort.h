#ifndef _QUICK_SORT_H
#define _QUICK_SORT_H
//快速排序

/*
	arr:待排序数组
	low:数组起始下标
	high:数组末位下标
*/
void QuickSort(int arr[], int low, int high);

/*
	arr:待排序数组(返回low最终位置)
	i:数组起始下标
	j:数组末位下标
*/
int Partition(int arr[], int i, int j);


void QuickSort(int arr[], int low, int high) {
	int overlap;
	if (low < high) {
		overlap = Partition(arr, low, high);
		QuickSort(arr, low, overlap - 1);
		QuickSort(arr, overlap + 1, high);
	}
}
int Partition(int arr[], int i, int j) {
    int temp = arr[i];
    while(i < j){
        while(i < j && arr[j] >= temp) --j;
        if(i < j){
            arr[i] = arr[j];
            ++i;
        }
        while(i < j && arr[i] <= temp) ++i;
        if(i < j){
            arr[j] = arr[i];
            --j;
        }
    }
    arr[i] = temp;
	return i;
}
#endif // !_QUICK_SORT_H
