#include <stdio.h>

void bubbleSort(int *arr, int len);

int main(){
	int arr[5] = {10, 50, 5, 8, 66};
	bubbleSort(arr, 5);
	
	for (int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}


void bubbleSort(int *arr, int len){
	int temp;
	for (int i = 0; i < len - 1; i++){
		for (int j = 0; j < len - i - 1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
