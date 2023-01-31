#include<bits/stdc++.h>
#define ll long long
using namespace std;
int getMin(int arr[],int s,int e){
    int min = arr[s], index = 0;
    while(s<=e){
        if(arr[s]<=min){
            min = arr[s];
            index = s;
        }
        s++;
    }
    return index;
}
void insertion(int arr[],int n){
    for (int i = 0; i < n; i++) {
        int index = getMin(arr,i,n-1);
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
}
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion(arr,n);
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
