#include <iostream>
using namespace std;
class Node {
    public:
	int data;
	Node* next;
    Node* prev;
    Node(int n){
        this->data = n;
        this->next = NULL;
        this->prev = NULL;
    }

};
class DLL{
    struct Node* head;
    struct Node* tail;

	public:

    DLL(){
        head = NULL;
		tail = NULL;
    }
    void insertAtFirst(int item){
	    Node* temp = new Node(item);
        if(head == NULL){
            tail = head = temp;
            return;
        }
	    temp->next = head;
        head->prev = temp;
	    head = temp;
    }
    void insertAtLast(int item) {
	    Node* temp = new Node(item);
        if(head == NULL){
		    insertAtFirst(item);
		    return;
	    }
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    void display(){
	    while (head != NULL) {
		    cout << head->data << " ";
		    head = head->next;
	    }
    }
};
int main(){
    DLL dl;
    dl.insertAtFirst(1);
    dl.insertAtFirst(2);
    dl.insertAtLast(3);
    dl.insertAtLast(4);
    dl.insertAtFirst(5);
	dl.display();
	return 0;
}

