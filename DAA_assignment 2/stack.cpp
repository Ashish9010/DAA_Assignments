#include <iostream>
using namespace std;
class stack{
    struct Node {
	    int data;
	    Node* next;
    };
	

	public:
	int top = 0;
	int size;
	struct Node* head; 
    stack(int size){
		this->size = size;
    }

    bool isEmpty(){
        return top == 0;
    }

	bool isFull(){
        return top == size;
    }

    void push(int item){
		if(isFull()){
            cout<<"Stack is full"<<endl;
            return;
        }
	    Node* temp = new Node;
	    temp->data = item;
	    temp->next = head;
	    head = temp;
		top++;
    }

	int pop(){
	    if(isEmpty()){
			cout<<"stack is empty"<<endl;
			return -1;
		}
		int removed = head->data;
	    head = head->next;
		top--;
	    return removed;
    }

	int peek(){
	    if(isEmpty()){
			cout<<"stack is empty"<<endl;
			return -1;
		}
	    return head->data;
    }
	
};
int main(){
	stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
	s.push(5);

	while(!s.isEmpty()){
        cout<<s.peek()<<endl;
        s.pop();
    }
	return 0;
}
