#include<bits/stdc++.h>
#define ll long long
using namespace std;
int getMax(int arr[],int s,int e){
    int max = arr[s], index = 0;
    while(s<=e){
        if(arr[s]>=max){
            max = arr[s];
            index = s;
        }
        s++;
    }
    return index;
}
void selection(int arr[],int n){
    for (int i = 0; i < n; i++) {
        int last = n-1-i;
        int index = getMax(arr,0,last);
        int temp = arr[index];
        arr[index] = arr[last];
        arr[last] = temp;
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
    selection(arr,n);
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
