#include<iostream>

using namespace std;

int linearSearch(int arr[], int length, int searchedValue)
{
	int counter = 0;
	
	for (int j = 0; j <= length; j++) {
		counter = counter + 1;
		if (searchedValue == arr[j]) {
			cout << "Counter :" << counter << "\n";
			return j;
			break;
		}
	}
	
	return -1;
}

int main()
{
	int arr[100000];
	
	for (int i = 0; i < 100000; i++) {
		arr[i] = i + 1;
	}
	
	int length = sizeof(arr) / sizeof(arr[0]);
	
	int upperBound = length - 1;
	
	int searchedValue = 100000;
	
	int result = linearSearch(arr, length, searchedValue);
	
	(result == -1) ? cout << "Value not found in the array!"
		: cout << "Value found at " << result;
	
}
