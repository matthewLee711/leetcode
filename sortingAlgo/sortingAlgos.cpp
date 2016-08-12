#include <iostream>
#include <array>


using namespace std;

/*Choosing a random pivot minimizes the chance that you will encounter worst-case O(n2) performance
(always choosing first or last would cause worst-case performance for nearly-sorted or nearly-reverse-sorted data).
Choosing the middle element would also be acceptable in the majority of cases.*/
void quickSort(int arr[], int left, int right) {
	int i = left;
	int j = right;
	int temp;
	int pivot = arr[(left + right) / 2];

	while (i <= j) {
		//move (right) to next number if already sorted
		while (arr[i] < pivot) {
			i++;
		}
		//move (left) to next number if already sorted
		while (arr[j] > pivot) {
			j--;
		}
		//swap and move to next number
		if (i <= j) {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j++;
		}
	}
	//recursion
	if (left < j) {
		quickSort(arr, left, i);
	}
	if (i < right) {
		quickSort(arr, i, right);
	}
}

/*Best case is O(n)*/
void insertionSort(int arr[]) {
	int j;//number compared against
	int temp;//temp hold for switching numbers
	//loop till each element is good
	for (int i = 0; i < 6; i++) {
		j = i;
		while (j > 0 && arr[j] < arr[j - 1]) {
			temp = arr[j];//temp store current index
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;//keep moving backwards until loop satisfied
		}
	}
}


int main() {
	int arr[6] = { 1, 5, 7, 8 ,9, 2 };
	insertionSort(arr);
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}
