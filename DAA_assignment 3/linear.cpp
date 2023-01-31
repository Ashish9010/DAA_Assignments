#include<bits/stdc++.h>
using namespace std;
void linear(int n,int arr[],int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            cout<<"value is present at position: "<<i<<endl;
            return;
        }
    }
    cout<<"Value is not present";
    return;
}
int main(){
    int n,val;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the target value: ";
    cin>>val;
    linear(n,a,val);
    return 0;
}


