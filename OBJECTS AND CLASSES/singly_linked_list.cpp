#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int value){
    Node* temp = new Node(value);
    temp->next = head;
    head = temp;    
}

void insertAtEnd(Node* &tail, int value){
    Node* temp = new Node(value);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int value){
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
    if(temp->next == NULL){
        insertAtEnd(tail, value);
        return;
    }
    insertNode->next = temp->next;
    temp->next = insertNode;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteNode(Node* &head, int position){
    Node* temp = head;
    int count = 1;
    while(count < position - 1){
        temp = temp->next;
        count++;
    }
    Node* nodeToDelete = temp->next;
    if(position == 1){
        head = temp->next;
        return;
    }
    temp->next = nodeToDelete->next;
    nodeToDelete->next = NULL;
}

// void reverseList(Node* &head, Node* &tail){
//     Node* i = head; Node* j = tail;
//     while()
// }
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtPosition(head, tail, 2, 15);
    insertAtPosition(head, tail, 3, 20);
    insertAtPosition(head, tail, 4, 25);
    print(head);
    int a = 3;
    cout<<endl<<5/2<<endl;
    return 0;
}