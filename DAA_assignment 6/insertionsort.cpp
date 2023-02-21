#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
	for (int i = 1; i < n; i++){
		int j = i;
		while (j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}
}

int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
	int arr[n];
    cout<<"Enter the elements of Array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
	insertionSort(arr, n);
    cout<<"Sorted Array is: ";
	for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

	return 0;
}

/*
Output:
Enter the size of Array: 10
Enter the elements of Array: 25 36 12 3 8 10 45 1 19 5
Sorted Array is: 1 3 5 8 10 12 19 25 36 45 
*/

