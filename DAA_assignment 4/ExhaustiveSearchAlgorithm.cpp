#include <bits/stdc++.h>
using namespace std;

 int exhaustiveSearch(vector<int>&v1,int i,vector<int>&w1,int capacity){
         
        if(i==0) 
          if(w1[i]<=capacity) return v1[0];
          else return 0;
        
        int noNeed = exhaustiveSearch(v1,i-1,w1,capacity);
        int need=0;
        
        if(w1[i]<=capacity) need=v1[i] + exhaustiveSearch(v1,i-1,w1,capacity-w1[i]);
        
     return max(noNeed,need);
    }

int main() {

  int n;
  cout<<"Enter number of packets : ";
  cin>>n;

  int capacity=0;
  cout<<"Enter Capacity : ";
  cin>>capacity;
  vector<int>v1(n),w1(n);

  cout<<"Enter value and its weight for each packet :";
  for(int i=0;i<n;i++){
    cin>>v1[i]>>w1[i];
  }

  cout << "Total profit = " << exhaustiveSearch(v1, n, w1, capacity) << endl;
}