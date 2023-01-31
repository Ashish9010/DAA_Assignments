#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
	Node(int n){
        this->data = n;
        this->next = NULL;
    }

};
class LL{
struct Node* head;
struct Node* tail;
public:
LL(){
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
	head = temp;
}
void insertAtLast(int item){
	Node* temp = new Node(item);
    if(head == NULL){
		insertAtFirst(item);
		return;
	}
    tail->next = temp;
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
	LL l;
    l.insertAtFirst(1);
    l.insertAtFirst(2);
    l.insertAtLast(3);
    l.insertAtLast(4);
	l.display();
	return 0;
}

