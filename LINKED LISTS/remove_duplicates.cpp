#include<iostream>
#include<map>
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

    //Destructor
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

void insertAtPosition(Node* &head, int position, int value){
    if(position == 1){
        insertAtHead(head, value);
        return;
    }

    Node* insertNode = new Node(value);
    Node* temp = head;
    int count = 1;
    while(count < position - 1){
        temp = temp->next;
        count++;
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

void deleteNode(Node* &head, int value){
    Node* temp = head;
    if(head->data == value){
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    while(temp->next != NULL){
        if(temp->next->data == value){
            Node* nodeToDelete = temp -> next;
            temp->next = nodeToDelete->next;
            nodeToDelete->next = NULL;
            delete nodeToDelete;
            return;
        }
        temp = temp->next;
    }
    cout<<"Given value not present in the list";
}

void removeDuplicatesSortedList(Node* &head){
    Node* prev = head;
    Node* curr = head->next;
    while(curr != NULL){
        if(prev->data == curr->data){
            //for last two or more having same value
            if(curr->next == NULL){
                prev->next = curr->next;
                curr->next = NULL;
                delete curr;
                return;
            }
            //other cases
            Node* temp = curr;
            prev->next = curr->next;
            curr = curr->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            prev = prev->next;
            curr = curr->next;
        }
    }
}

// Node* removeDuplicatesUnsortedList(Node* &head){
//     Node* prev = head;
//     Node* curr = head->next;
//     map<int, bool> checkVisited;
//     checkVisited[prev->data] = true;

//     while(curr != NULL){
//         //for last cases having same values
//         // if(curr->next == NULL && checkVisited[curr->data] == true){
//         //     Node* temp = curr;
//         //     prev->next = curr->next;
//         //     temp->next = NULL;
//         //     delete temp;
//         //     return;
//         // }

//         //other cases
//         if(checkVisited[curr->data] == true){
//             Node* temp = curr;
//             prev->next = curr->next;
//             curr = curr->next;
//             temp->next = NULL;
//             // delete temp;
//         }
//         else{
//             checkVisited[curr->data] = true;
//             prev = prev->next;
//             curr = curr->next;
//         }
//     }
//     return head;
// }

//2nd approach using nested while loops
// Node* removeDuplicatesUnsortedList(Node* &head){
//     Node* tracker = head;
//     while(tracker != NULL){
//         int value = tracker->data;
//         Node* prev = tracker;
//         Node* curr = tracker->next;
//         while(curr != NULL){
//             if(curr->data == value){
//                 prev->next = curr->next;
//                 curr = curr->next;
//             }
//             else{
//                 prev = prev->next;
//                 curr = curr->next;
//             }
//         }
//         tracker = tracker->next;
//     }
//     return head;
// }

Node* removeDuplicatesUnsortedList(Node* &head){
    Node* prev = head;
    Node* curr = head->next;
    map<int, bool> checkVisited;
    checkVisited[prev->data] = true;

    while(curr != NULL){
        if(checkVisited[curr->data] == true){
            prev->next = curr->next;
            curr = curr->next;
        }
        else{
            checkVisited[curr->data] = true;
            prev = prev->next;
            curr = curr->next;
        }
    }
    return head;
}

int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    insertAtPosition(head,2,1);
    insertAtPosition(head,3,2);
    insertAtPosition(head,4,2);
    insertAtPosition(head,5,1);
    // insertAtPosition(head,6,1);
    // insertAtPosition(head,7,3);
    // insertAtPosition(head,8,3);
    // insertAtPosition(head,9,2);
    // insertAtPosition(head,10,2);
    print(head);
    // removeDuplicatesSortedList(head);
    Node* temp = removeDuplicatesUnsortedList(head);
    print(temp);
    return 0;
}

