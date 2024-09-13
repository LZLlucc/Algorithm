#include <stdio.h>

int binarySearch(int *arr, int target, int len);


int main(){
	int arr[5] = {10, 15, 30, 55, 90};
	int target  = 55;
	int index = binarySearch(arr, target, 5);
	printf("%d\n", index);
	return 0;
}


int binarySearch(int *arr, int target, int len){
	int start = arr[0];
	int end = arr[len - 1];
	int mid = len / 2;
	while(start <= end){
		
		if (arr[mid] == target){
			return mid;
		}
		else if(arr[mid] > target){
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
	}
	return -1;
}
