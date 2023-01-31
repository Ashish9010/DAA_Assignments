#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	Node(int n){
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

    void enqueue(int item){
	    Node* temp = new Node(item);
        if(tail == NULL){
            tail = head = temp;
            return;
        }
	    tail->next = temp;
	    tail = temp;
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
    q.enqueue(1);
    q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.display();

	return 0;
}
