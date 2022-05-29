
#include<iostream>
using namespace std;

//int linear_searrch(int* arr, int n, int key) {
int linear_searrch(int arr[], int n, int key) {

	for (int i = 0; i < n; i++)
	{
		//check current element matches with the key
		if (arr[i] == key) {

			return i;

		}
		
	}
	//out of the loop
	return -1;


}

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6 };

	int n = sizeof(arr) / sizeof(int);

	int key;
	cout << "Enter the key to search" << endl;
	cin >> key;
	//call the linear_searrch method,

	int index = linear_searrch(arr, n, key);

	if (index != -1) {

		cout << "is present at the index " << index << endl;
	}
	else
	{
		cout << "is not present at the index" << index << endl;
	}

	return 0;
}

