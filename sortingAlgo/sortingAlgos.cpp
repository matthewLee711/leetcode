#include <iostream>
#include <array>


using namespace std;


/*
888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
MERGE SORT
888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
*/
/*MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:
             middle m = (l+r)/2
     2. Call mergeSort for first half:
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)
*/
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	int L[1], R[2];
	//int L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	//for (i = 0; i < n1; i++)
		//L[i] = arr[l + i];
	//for (j = 0; j < n2; j++)
		//R[j] = arr[m + 1 + j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

//This part merges the arrays back together
void merge(int numbers[], int temp[], int left, int mid, int right)
{

	int i, left_end, num_elements, tmp_pos;

	left_end = (mid - 1);
	tmp_pos = left;
	num_elements = (right - left + 1);

	while ((left <= left_end) && (mid <= right))
	{
		if (numbers[left] <= numbers[mid])
		{
			temp[tmp_pos] = numbers[left];
			tmp_pos += 1;
			left += 1;
		}
		else
		{
			temp[tmp_pos] = numbers[mid];
			tmp_pos += 1;
			mid += 1;
		}
	}

	while (left <= left_end)
	{
		temp[tmp_pos] = numbers[left];
		left += 1;
		tmp_pos += 1;
	}
	while (mid <= right)
	{
		temp[tmp_pos] = numbers[mid];
		mid += 1;
		tmp_pos += 1;
	}

	for (i = 0; i <= num_elements; i++)
	{
		numbers[right] = temp[right];
		right -= 1;
	}
}


/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void m_sort(int numbers[], int temp[], int left, int right)
{
	int mid;

	if (right > left)
	{
		mid = (right + left) / 2;
		// Sort first and second halves
		m_sort(numbers, temp, left, mid);
		m_sort(numbers, temp, (mid + 1), right);
		//merge them
		merge(numbers, temp, left, (mid + 1), right);
	}
}


/*
888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
QUICK SORT
888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
*/
/*Choosing a random pivot minimizes the chance that you will encounter worst-case O(n2) performance
(always choosing first or last would cause worst-case performance for nearly-sorted or nearly-reverse-sorted data).
Choosing the middle element would also be acceptable in the majority of cases.*/
void quickSort(int arr[], int left, int right)
{
	int i = left;
	int	j = right;
	int tmp;
	int pivot = arr[abs((left + right) / 2)];
	cout << "pivot is " << pivot << endl;

	/* partition */
	while (i <= j) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) {
			cout << "i and j are " << i << " " << j << " and corresponding array value is " << arr[i] << " " << arr[j] << endl;
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
			cout << "entering first big while loop" << endl;
			for (int i = 0; i<7; i++)
				cout << arr[i] << " " << endl;
		}
	}
	cout << "recursion" << endl;

	/* recursion */
	if (left < j)
		quickSort(arr, left, j);

	if (i< right)
		quickSort(arr, i, right);
}


/*
888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
INSERTION SORT
888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
*/
//Pass in num of elements and array to sort
void insertionSortRec(int i, int a[])
{
	int j;
	int temp;
	if (i>0)
	{
		insertionSortRec(i - 1, a);
		temp = a[i];
		j = i - 1;
		while (a[j]>temp&&j >= 0)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
}

/*Best case is O(n). Insertion sort is the fastest with elements below 26.*/
void insertionSort(int arr[]) {
	int j;//This is index in arr, numbers compared against this.
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
	int arr[7] = { 1, 5, 7, 8 ,9, 2, 5 };
	//insertionSort(arr);
	insertionSortRec(7, arr);
	//m_sort();
	//quickSort(arr, 0, 6);
	for (int i = 0; i < 7; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}
