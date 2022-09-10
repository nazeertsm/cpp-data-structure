#include<iostream>
using namespace std;

//printArray function accept the array
void printArray(int *arr, int n) {

	cout << "in the method " << sizeof(arr) << endl;
	arr[0] = 100;

	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
		

	}

}


int main() {

//create and initialize the array
	int arr[] = { 1, 2, 3, 4, 5, 6 };

	//How many element are there in array
	int n = sizeof(arr) / sizeof(int);// 24 bytes/4 bytes

	cout << "in the main " << sizeof(arr) << endl;
	/*call the printArray method
	Arrys are passed by reference  */

	printArray(arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;

	}

	return 0;
}