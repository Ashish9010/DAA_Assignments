#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Queue{
    public:
    int rear = -1;
    int size;
    int arr[];

    Queue(int n){
        arr[n];
        this->size = n;
    }
    bool isEmpty(){
        return rear == -1;
    }
    bool isFull(){
        return rear == size-1;
    }
    void add(int val){
        if(isFull()){
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[++rear] = val;
    }
    int remove(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int removed = arr[0];
        for(int i=1;i<=rear;i++){
            arr[i-1]=arr[i];
        }
        rear--;
        return removed;
    }

    int peek(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[0];
    }
};
int main(){
   Queue q(6);
   q.add(1);
   q.add(2);
   q.add(3);
   q.add(4);
   q.add(5);

   while(!q.isEmpty()){
    cout<<q.peek()<<endl;
    q.remove();
   }
return 0;
}