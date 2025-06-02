#include<iostream>
#include<algorithm>
#include<string>
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
        // cout<<temp->next<<" -> ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
Node* getMiddle(Node* &head){
    int length = getLength(head);
    Node* temp = head;
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

// void checkPalindrome(Node* &head){
//     Node* temp = head;
//     Node* middleOfList = getMiddle(head);
//     int length = getLength(head);
//     Node* temp1 = middleOfList->next;
//     string str1; string str2;
//     int arr1[] = {}, arr2[] =  {};
//     int i = 0, j = 0;
//     while(temp != middleOfList){
//         // str1[i] = 'temp->data';
//         // str1.assign(i,temp->data);
//         arr1[i] = temp->data;
//         cout<<"arr1[i]"<<i<<" "<<arr1[i]<<endl;
//         temp = temp->next;
//         i++;
//     }
//     while(temp1 != NULL){
//         // str2[j] = 'temp1->data';
//         // str2.assign(j,temp1->data);
//         arr2[j] = temp1->data;
//         temp1 = temp1->next;
//         j++;
//     }
//     int arr1Size = sizeof(arr1)/sizeof(arr1[0]);
//     int arr2Size = sizeof(arr2)/sizeof(arr2[0]);
//     int count = 0;
//     // reverse(arr2, arr2 + arr2Size);
//     // for(int k = 0; k < (length/2); k++){
//     //     if(arr1[k] == arr2[k]){
//     //         count++;
//     //     }
//     // }
//     if(count == length/2){
//         cout<<"Palindrome"<<endl;
//     }
//     else{
//         cout<<"not"<<endl;
//     }
//     // cout<<str1<<endl;
//     // cout<<reverseOfStr2<<endl;
//     cout<<"arr1[0] "<<arr1[0]<<endl;
//     for(int i = 0; i < length/2; i++){
//         cout<<arr1[i]<<" ";
//     }
//     cout<<endl;
//     for(int i = 0; i < length/2; i++){
//         cout<<arr2[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"i : "<<i<<endl;
//     cout<<"j : "<<j<<endl;
// }

bool checkPalindrome1(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward;
    Node* middleOfList = getMiddle(head);
    int length = getLength(head);
    if(length % 2 == 0){
        while(curr != middleOfList){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        head->next = curr;
        head = prev;
        Node* temp = head;
        Node* temp1 = middleOfList;
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
        if(count == (length/2)){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        while(curr != middleOfList){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        head->next = curr;
        head = prev;
        Node* temp = head;
        Node* temp1 = middleOfList->next;
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
        if(count == (length/2)){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    insertAtPosition(head, tail, 2, 2);
    insertAtPosition(head, tail, 3, 3);
    insertAtPosition(head, tail, 4, 2);
    insertAtPosition(head, tail, 5, 1);
    print(head);
    cout<<checkPalindrome1(head)<<endl;
    print(head);
    return 0;
}