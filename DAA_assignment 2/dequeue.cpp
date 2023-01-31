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

    void enqueue(int item){
	    Node* temp = new Node(item);
        if(tail == NULL){
            tail = head = temp;
            return;
        }
	    tail->next = temp;
	    tail = temp;
    }

	int dequeue(){
	    if(isEmpty()){
			cout<<"queue is empty"<<endl;
			return -1;
		}
		int removed = head->data;
	    head = head->next;
	    return removed;
    }
	
    void display(){
        Node* temp = head;
	    while(temp != NULL) {
		    cout<< temp->data << " ";
		    temp = temp->next;
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

    cout<<"Queue elements are : "<<endl;
	q.display();
    cout<<endl;

    cout<<"Dequeuing the elements: "<<endl;
	while(!q.isEmpty()){
        cout<<q.dequeue()<<" ";
    }
	return 0;
}
