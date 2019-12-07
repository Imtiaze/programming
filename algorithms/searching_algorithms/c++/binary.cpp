#include<iostream>

using namespace std;

int binarySearch( int arr[],  int lowerBound,  int upperBound,  int searchedValue)
{
	 int counter = 0;
	
	while (lowerBound <= upperBound)
	{
		 int midPoint = (lowerBound + upperBound) / 2;
		 int midPointValue = arr[midPoint];
		
		if (searchedValue == midPointValue) {
			counter = counter + 1;
			cout << counter << "\n";
			return midPoint;
		}
		
		if (searchedValue < midPointValue) {
			counter = counter + 1;
			upperBound = midPoint - 1;
		} else {
			counter = counter + 1;
			lowerBound = midPoint + 1;
		}
	}
	return -1;
}

int main()
{
//	int arr[] = {5, 10, 19, 38, 44, 78, 82, 103, 123, 222};

	 int arr[100000];
	
	for ( int i = 0; i < 100000; i++) {
		arr[i] = i + 1;
//		cout << arr[i] << "\n";
	}
	
	 int length = sizeof(arr) / sizeof(arr[0]);
	
	 int lowerBound = 0;
	 int upperBound = length - 1;
	
	 int searchedValue = 5;
	
	 int result = binarySearch(arr, lowerBound, upperBound, searchedValue);
	
	(result == -1) ? cout << "Value is not found in the array!"
	   : cout << "Value found at index " << result;
	
	return 0;
}
