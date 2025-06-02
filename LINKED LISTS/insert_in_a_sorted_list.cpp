#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int value){
    Node* temp = new Node(value);
    temp->next = head;
    head = temp;
}

void insertAtPosition(Node* &head, int position, int value){
    if(position == 1){
        insertAtHead(head,value);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count < position - 1){
        temp = temp->next;
        count++;
    }
    Node* nodeToInsert = new Node(value);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void sortedInsert(Node* &head, int value){
    Node* prev = head; Node* curr = head->next;
    Node* temp = new Node(value);
    if(head->data > value){
        temp->next = prev;
        head = temp;
        return;
    }
    while(curr != NULL){
        if(prev->data == value){
            prev->next = temp;
            temp->next = curr;
            return;
        }
        else if(prev->data < value && curr->data > value){
            prev->next = temp;
            temp->next = curr;
            return;
        }
        else{
            prev = prev->next;
            curr = curr->next;
        }
    }
    prev->next = temp;
}

int main(){
    Node* node1 = new Node(3);
    Node* head = node1;
    insertAtHead(head,1);
    insertAtPosition(head,3,5);
    insertAtPosition(head,4,7);
    insertAtPosition(head,5,9);
    sortedInsert(head,0);
    sortedInsert(head,2);
    print(head);
    
    return 0;
}