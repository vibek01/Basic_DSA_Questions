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
    Node* insertNode = new Node(value);
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

int getLength(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    return count;
}
void sort0s1s2s(Node* &head){
    Node* temp = head;
    int countZero = 0, countOne = 0, countTwo = 0;
    while(temp != NULL){
        if(temp->data == 0){
            countZero++;
        }
        else if(temp->data == 1){
            countOne++;
        }
        else{
            countTwo++;
        }
        temp = temp->next;
    }
    cout<<countZero<<endl;
    cout<<countOne<<endl;
    cout<<countTwo<<endl;
    temp = head;
    int value = 0;
    while(temp != NULL){
        if(countZero == 0){
            value = 1;
        }
        if(countOne == 0){
            value = 2;
        }
        if(value == 0){
            countZero--;
        }
        if(value == 1){
            countOne--;
        }
        temp->data = value;
        temp = temp->next;
    }
}
int main(){
    Node* node1 = new Node(0);
    Node* head = node1;
    print(head);
    // cout<<getLength(head)<<endl;
    insertAtPosition(head,2,1);
    insertAtPosition(head,3,2);
    insertAtPosition(head,4,0);
    insertAtPosition(head,5,1);
    insertAtPosition(head,6,2);
    print(head);
    // cout<<getLength(head)<<endl;
    sort0s1s2s(head);
    print(head);
    cout<<endl;
    return 0;
}