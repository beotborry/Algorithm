/* insertion sort */
#include <iostream>
using namespace std;

int arr[100];
int N;

void insertionSort(int* arr) {
	for (int j = 1; j < N; j++) {
		int key = arr[j];
		// insert A[j] into the sorted sequence A[1..j-1]
		int i = j - 1;
		while(i >= 0 && arr[i] > key) {
			arr[i + 1] = arr[i];
			i = i - 1;
		}
		arr[i + 1] = key;
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	
	insertionSort(arr);
	
	for (int i = 0; i < N; i++)
		cout << arr[i] << ' ';
}