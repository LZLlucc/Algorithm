#include <stdio.h>

int sequentSearch(const int *arr, int target, int n);

int main(){
	int arr[5] = {25, 10, 8, 50, 99};
	int target = 8;
	int index = sequentSearch(arr,target, 5);
	printf("%d\n", index);
	return 0;
}


int sequentSearch(const int *arr, int target, int n){
	for(int i = 0; i < n; arr++){
		if(arr[i] == target){
			return i;
		}
		return -1; //not find
	}
}

