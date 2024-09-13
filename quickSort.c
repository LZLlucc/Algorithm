#include <stdio.h>

void quickSort(int *arr, int start, int end);

int main(){
	int arr[5] = {10, 25, 5, 80, 9};
	quickSort(arr, 0, 4);
	
	for(int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}

	printf("\n");
	return 0;
}


void quickSort(int *arr, int start, int end){
	if(start < end){
		int base = arr[start];
		int low = start;
		int hight = end + 1;
	
		while(1){
			while(low < end && arr[++low] <= base);
			while(hight > start && arr[--hight] >= base);
			if(low < hight){
				int temp = arr[hight];
				arr[hight] = arr[low];
				arr[low] = temp;
			}
			else{
					break;
			}
		}
		int temp1 = arr[start];
		arr[start] = arr[hight];
		arr[hight] = temp1;
		
		quickSort(arr, start, hight - 1);
		quickSort(arr, hight + 1, end);
	}
}
