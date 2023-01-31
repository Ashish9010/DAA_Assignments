#include<bits/stdc++.h>
using namespace std;
void interpolation(int n,int arr[],int val){
    int start = 0,last = n-1;
    while(start<=last){
        int middle = start + ((last-start)/(arr[last]-arr[start]))*(val-arr[start]);
        // ((e-s)/(arr[e]-arr[s]))*(target-arr[s]);
        if(arr[middle]==val){
            cout<<"Value is prsent at position: "<<middle<<endl;
            return;
        }
        if(arr[middle]>val){
            last = middle - 1;
        }else{
            start = middle + 1;
        }
    }
    cout<<"Value is not prsent";
    return;
}
int main(){
    int n,val;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of element you want to search: ";
    cin>>val;
    interpolation(n,arr,val);
    return 0;
}

