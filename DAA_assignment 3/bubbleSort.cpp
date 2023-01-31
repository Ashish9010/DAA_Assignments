#include<bits/stdc++.h>
#define ll long long
using namespace std;
void bubble(int arr[],int n){
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n-1-i; j++) {
            if(arr[j-1]>arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
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
    bubble(arr,n);
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
return 0;
}
