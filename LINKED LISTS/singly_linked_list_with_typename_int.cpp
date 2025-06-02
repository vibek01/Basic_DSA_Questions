#include<iostream>
using namespace std;

template <typename T>
class LinkedListNode{
    public:
    T data;
    LinkedListNode<T> *next;

    //constructor
    LinkedListNode(T data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(LinkedListNode<int>* &head, int value){
    LinkedListNode<int>* temp = new LinkedListNode<int>(value);
    temp->next = head;
    head = temp;
}

void insertAtEnd(LinkedListNode<int>* &tail, int value){
    LinkedListNode<int>* temp = new LinkedListNode<int>(value);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(LinkedListNode<int>* &head, LinkedListNode<int>* &tail, int position, int value){
    LinkedListNode<int>* temp = head;
    if(position == 1){
        insertAtHead(head, value);
        return;
    }
    int count = 1;
    while(count < position - 1){
        temp = temp->next;
        count++;
    }
    LinkedListNode<int>* insertNode = new LinkedListNode<int>(value);
    if(temp->next == NULL){
        insertAtEnd(tail, value);
        return;
    }
    insertNode->next = temp->next;
    temp->next = insertNode;
}

void print(LinkedListNode<int>* &head){
    LinkedListNode<int>* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        // cout<<temp->next<<" -> ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(LinkedListNode<int>* &head){
    LinkedListNode<int>* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

LinkedListNode<int>* getMiddle(LinkedListNode<int>* &head){
    int length = getLength(head);
    LinkedListNode<int>* temp = head;
    int count = 1;
    if(length % 2 == 0){
        while(count < (length/2) + 1){
            temp = temp->next;
            count++;
        }
    }
    else{
        while(count < (length/2) + 1){
            temp = temp->next;
            count++;
        }
    }
    return temp;
}

bool checkPalindrome(LinkedListNode<int>* &head){
    //edge cases
    if(head == NULL || head->next == NULL){
        return true;
    }
    
    //getting the middle of the list
    LinkedListNode<int>* middleOfList = getMiddle(head);

    //getting the lenght of the list
    int length = getLength(head);

    //some pointers for iteration and reversal of the half list
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* forward;

    //if length is even
    if(length % 2 == 0){

        //reversing the half of the list for palindrome check.
        while(curr != middleOfList){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }

        //adjusting the head
        head->next = curr;
        head = prev;

        //check for palindrome by compairing each and every value.
        LinkedListNode<int>* temp = head;
        LinkedListNode<int>* temp1 = middleOfList;
        int count = 0;
        while(temp1 != NULL){
            if(temp->data == temp1->data){
                count++;
                temp = temp->next;
                temp1 = temp1->next;
            }
            else{
                temp = temp->next;
                temp1 = temp1->next;
            }
        }

        //if palindrome
        if(count == (length/2)){
            return true;
        }
        else{
            return false;
        }
    }

    //if the list is odd
    else{

        //reversing the half part of list (head to middleOfList)
        while(curr != middleOfList){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }

        //adjusting the head
        head->next = curr;
        head = prev;

        //palindrome check by compairing each and every value except middle node
        LinkedListNode<int>* temp = head;
        LinkedListNode<int>* temp1 = middleOfList->next;
        int count = 0;
        while(temp1 != NULL){
            if(temp->data == temp1->data){
                count++;
                temp = temp->next;
                temp1 = temp1->next;
            }
            else{
                temp = temp->next;
                temp1 = temp1->next;
            }
        }

        //if palindrome
        if(count == (length/2)){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    LinkedListNode<int>* node1 = new LinkedListNode<int>(1);
    LinkedListNode<int>* head = node1;
    LinkedListNode<int>* tail = node1;
    print(head);
    // insertAtPosition(head, tail, 2, 1);
    // insertAtPosition(head, tail, 3, 3);
    // insertAtPosition(head, tail, 4, 2);
    // insertAtPosition(head, tail, 5, 1);
    print(head);
    cout<<checkPalindrome(head)<<endl;
    print(head);
    return 0;
}