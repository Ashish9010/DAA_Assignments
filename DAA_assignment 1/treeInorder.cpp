#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
       data=d;
       left = NULL;
       right = NULL;
    }
};
    Node* create(){
        int data;
        Node* head;
        cout<<"Enter the value of data: ";
        cin>>data;
        if(data==-1) return NULL;
        head = new Node(data);
        cout<<"Enter the left child of "<< head->data <<": ";
        head->left = create();
        cout<<"Enter the right child of "<< head->data <<": ";
        head->right = create();
        return head;

    }
    void preorder(Node* head){  // NLR
        if(head==NULL) return;
        cout<<head->data<<" ";
        preorder(head->left);
        preorder(head->right);
    }
    void inorder(Node* head){  // LNR
        if(head==NULL) return;
        inorder(head->left);
        cout<<head->data<<" ";
        inorder(head->right);
    }
    void postorder(Node* head){  // LRN
        if(head==NULL) return;
        postorder(head->left);
        postorder(head->right);
        cout<<head->data<<" ";
    }
int main(){
    Node* root = create();
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
   
return 0;
}