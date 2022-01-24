#include "InsertSort.h"

using namespace std;

int main()
{
	int arr[] = { 7,6,5,4,3,2,1 };
	InsertSort(arr, sizeof(arr) / sizeof(arr[0]));
	return 0;
}
