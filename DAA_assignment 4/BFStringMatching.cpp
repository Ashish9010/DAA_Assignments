#include<bits/stdc++.h>
#define ll long long
using namespace std;

int isSubstring(string s,int ls,string p,int lp){
    for (int i = 0; i < ls-lp+1; i++) {
        bool ans = true;
        for (int j = 0; j < lp; j++) {
            if(p[j]!= s[j+i]){
                ans = false;
                break;
            }
        }
        if(ans) return i;
    }
    return -1;
}
int main(){
    string s,p;
    int ls,lp;
    cout<<"Enter the length main string : ";
    cin>>ls;
    cout<<"Enter the main string : ";
    cin>>s;
    cout<<"Enter the length of sub string : ";
    cin>>lp;
    cout<<"Enter the sub string to search its index: ";
    cin>>p;
    cout<<endl;
    int a = isSubstring(s,ls,p,lp);
    if(a!=-1){
        cout<<"The index of the sub string is : "<<a<<endl;
    }else{
        cout<<"Sub string is not present in main string"<<endl;
    }

return 0;
}

/*
Output: 
1)
Enter the length main string : 10
Enter the main string : abcdefghij
Enter the length of sub string : 4
Enter the sub string to search its index: efgh

The index of the sub string is : 4

2)
Enter the length main string : 15
Enter the main string : abcdefghijklmno
Enter the length of sub string : 3
Enter the sub string to search its index: mno

The index of the sub string is : 12
*/