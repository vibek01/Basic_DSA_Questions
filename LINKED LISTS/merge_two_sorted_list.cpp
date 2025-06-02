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

int getLength(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

Node* mergeTwoSortedList(Node* &head1, Node* &head2){
    int lengthOfNode1 = getLength(head1), lengthOfNode2 = getLength(head2);
    int i = 0, j = 0;
    Node* tempOfHead1 = head1; Node* tempOfHead2 = head2;
    Node* mergedHead = NULL; Node* node3; Node* temp;

    while(i < lengthOfNode1 && j < lengthOfNode2){
        if(tempOfHead1->data < tempOfHead2->data){
            if(mergedHead == NULL){
                node3 = new Node(tempOfHead1->data);
                mergedHead = node3;
                temp = mergedHead;
                tempOfHead1 = tempOfHead1->next;
                i++;
            }
            else{
                Node* nodeToInsert = new Node(tempOfHead1->data);
                temp->next = nodeToInsert;
                temp = temp->next;
                tempOfHead1 = tempOfHead1->next;
                i++;
            }
        }
        else{
            if(mergedHead == NULL){
                node3 = new Node(tempOfHead2->data);
                mergedHead = node3;
                temp = mergedHead;
                tempOfHead2 = tempOfHead2->next;
                j++;
            }
            else{
                Node* nodeToInsert = new Node(tempOfHead2->data);
                temp->next = nodeToInsert;
                temp = temp->next;
                tempOfHead2 = tempOfHead2->next;
                j++;
            }
        }
    }
    while(i < lengthOfNode1){
        Node* nodeToInsert = new Node(tempOfHead1->data);
        temp->next = nodeToInsert;
        temp = temp->next;
        tempOfHead1 = tempOfHead1->next;
        i++;
    }
    while(j < lengthOfNode2){
        Node* nodeToInsert = new Node(tempOfHead2->data);
        temp->next = nodeToInsert;
        temp = temp->next;
        tempOfHead2 = tempOfHead2->next;
        j++;
    }
    return mergedHead;
}

int main(){
    Node* node1 = new Node(1);
    Node* head1 = node1;
    insertAtPosition(head1,2,2);
    insertAtPosition(head1,3,3);
    print(head1);
    Node* node2 = new Node(0);
    Node* head2 = node2;
    insertAtPosition(head2,2,0);
    insertAtPosition(head2,3,1);
    print(head2);
    Node* getHead1 = mergeTwoSortedList(head1, head2);
    print(getHead1);
    return 0;
}