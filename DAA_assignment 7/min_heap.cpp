#include <iostream>
using namespace std;
void min_heapify(int *arr,int i,int n){
    int j, temp;
    temp = arr[i];
    j = 2 * i;
    while (j <= n){
        if (j < n && arr[j+1] < arr[j])
            j = j + 1;
        if (temp < arr[j])
            break;
        else if (temp >= arr[j]){
            arr[j/2] = arr[j];
            j = 2 * j;
        }
    }
    arr[j/2] = temp;
    return;
}
void build_minheap(int *a, int n){
    int i;
    for(i = n/2; i >= 1; i--){
        min_heapify(a,i,n);
    }
}
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[20];
    cout<<"enter elements of array\n";
    for (int i = 1; i <= n; i++){
        cin>>arr[i];
    }
    build_minheap(arr, n);
    cout<<"Min Heap\n";
    for (int i = 1; i <= n; i++){
        cout<<arr[i]<<" ";
    }
}

/*
Output:
enter size of array : 11
enter elements of array
2 16 74 58 36 4 28 15 35 82 6
Min Heap
2 6 4 15 16 74 28 58 35 82 36 

*/