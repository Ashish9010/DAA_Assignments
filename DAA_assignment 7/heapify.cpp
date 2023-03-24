#include <iostream>
using namespace std;
  
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    if (largest != i) {
      swap(arr[i], arr[largest]);
      heapify(arr, n, largest);
    }
}

void construct_heap(int arr[], int n){
    for (int i = n / 2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }
      
}

void print_heap(int arr[], int n){
    cout << "Printing values at each node in heap : " << endl;
    for (int index = 0; index < n; index+=1){
        cout<< arr[index] << " ";
    }
}

int main(){
    int arr[] = { 3, 5, 8, 10, 17, 11, 13, 19, 22, 24, 29};
    int n = sizeof(arr) / sizeof(arr[0]);
    construct_heap(arr, n);
    print_heap(arr, n);
}

/*
Input Array: [3, 5, 8, 10, 17, 11, 13, 19, 22, 24, 29]
Output:  
Printing values at each node in heap : 
29 24 13 22 17 11 8 19 10 5 3 

*/