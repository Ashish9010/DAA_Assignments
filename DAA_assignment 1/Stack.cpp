#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Stack{
    public:
    int top = -1;
    int size;
    int arr [];

    Stack(int n){
        arr [n];
        this->size = n;
    }
    bool isEmpty(){
        return top == -1;
    }
    bool isFull(){
        return top == size-1;
    }
    void push(int val){
        if(isFull()){
            cout<<"Stack is full"<<endl;
            return;
        }
        arr[++top] = val;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top--];
    }
    int peek(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }

};
int main(){
   Stack s(7);
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);
   s.push(6);
   s.push(7);

    while(!s.isEmpty()){
        cout<<s.peek()<<endl;
        s.pop();
    }
return 0;
}