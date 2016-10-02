#include <iostream>


int findEqualibrium(int arr[]) {
	int sum = 0;
	int left = 0;
	for (int i = 0; i < 7; i++) {
		sum += arr[i];
	}
	int max = 7;
	for (int i = 0; i < 7; i++) {
		sum -= arr[i];
		left += arr[i];
		if (left == sum) {
			return 1;
		}

		max--;
	}
	return 0;
}


int main() {
	int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
	findEqualibrium(arr);
	std::cout << findEqualibrium(arr) << std::endl;
}
