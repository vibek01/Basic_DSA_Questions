#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    //constructor
    Node(int value){
        this->data = value;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head, int value){
    Node* temp = new Node(value);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int value){
    Node* temp = new Node(value);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtPosition(Node* &head, Node* &tail, int position, int value){
    Node* temp = head; int count = 1;
    if(position == 1){
        insertAtHead(head,value);
        return;
    }
    while(count < position - 1){
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL){
        insertAtTail(tail, value);
        return;
    }
    Node* nodeToInsert = new Node(value);
        nodeToInsert->next = temp->next;
        temp->next->prev = nodeToInsert;
        temp->next = nodeToInsert;
        nodeToInsert->prev = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* &head){
    Node* temp = head; int length = 0;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

void reverseList(Node* &head, Node* &tail, int length){
    Node* i = head; Node* j = tail;
    int count = 1;
    while(count <= (length/2)){
        swap(i->data, j->data);
        i = i->next;
        j = j->prev;
        count++;
    }
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtPosition(head,tail,2,15);
    insertAtPosition(head,tail,3,20);
    insertAtPosition(head,tail,4,25);
    insertAtPosition(head,tail,5,30);
    insertAtPosition(head,tail,6,35);
    print(head);
    int len = getLength(head);
    cout<<endl<<"len is : "<<len<<endl;
    reverseList(head,tail,len);
    print(head);





    // cout<<"Length is : "<<getLength(head)<<endl;
    // print(head);
    // insertAtPosition(head,tail,2,20);
    // cout<<"Length is : "<<getLength(head)<<endl;
    // print(head);
    // insertAtPosition(head,tail,3,30);
    // cout<<"Length is : "<<getLength(head)<<endl;
    // print(head);
    // insertAtPosition(head,tail,4,40);
    // cout<<"Length is : "<<getLength(head)<<endl;
    // print(head);
    // cout<<"head is : "<<head->data<<endl;
    // cout<<"tail is : "<<tail->data<<endl;
    // cout<<"head next : "<<head->prev<<endl;
    // cout<<"tail prev : "<<tail->next<<endl;

    return 0;
}