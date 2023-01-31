#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;

	Node(int n)
	{
		this->data = n;
		this->next = NULL;
	}
};
class Queue{
	struct Node* tail; 
	struct Node* head;
	public:
	
    Queue(){
		head = NULL;
		tail = NULL;
    }

    bool isEmpty(){
        return head == NULL;
    }

    void add(int item){
	    Node* temp = new Node(item);
        if(tail == NULL){
            tail = head = temp;
            return;
        }
	    tail->next = temp;
	    tail = temp;
    }

	int remove(){
	    if(isEmpty()){
			cout<<"queue is empty"<<endl;
			return -1;
		}
		int removed = head->data;
	    head = head->next;
	    return removed;
    }

	int peek(){
	    if(isEmpty()){
			cout<<"queue is empty"<<endl;
			return -1;
		}
	    return head->data;
    }
	
    void display(){
	    while(head != NULL) {
		    cout<< head->data << " ";
		    head = head->next;
	    }
    }
};
int main(){
	Queue q;
    q.add(1);
    q.add(2);
	q.add(3);
	q.add(4);
	q.add(5);
	q.display();

	// while(!q.isEmpty()){
    //     cout<<q.peek()<<endl;
    //     q.remove();
    // }
	return 0;
}
