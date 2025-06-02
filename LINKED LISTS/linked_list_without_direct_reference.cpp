#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory free for node with value : "<<value<<endl;
    }
};

void insertAtHead(Node* head, int value){
    Node* temp = new Node(value);
    temp->next = head;
    head = temp;    
}

void insertAtPosition(Node* head, int position, int value){
    Node* temp = head;
    if(position == 1){
        insertAtHead(head, value);
        return;
    }
    int count = 1;
    while(count < position - 1){
        temp = temp->next;
        count++;
    }
    Node* insertNode = new Node(value);
    insertNode->next = temp->next;
    temp->next = insertNode;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        // cout<<temp->next<<" -> ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    print(head);
    insertAtHead(head,0);
    print(head);
    return 0;
}