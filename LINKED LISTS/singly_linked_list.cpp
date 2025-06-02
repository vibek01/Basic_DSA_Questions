#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* trap;
    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->trap = NULL;
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

void printAtPosition(Node* &head, int position){
    Node* temp = head;
    int tempPosition = 0;
    while(tempPosition++ < position){
        temp = temp->next;          
    }
    cout<<temp->data;
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
    delete nodeToDelete;
}

void reverseLinkedList(Node* &head, Node* &tail){
    Node* copyHead = head;
    Node* temp = head->next;
    Node* forward = temp->next;
    while(true){
        if(temp->next == NULL){
            temp->next = copyHead;
            head->next = NULL;
            Node* swapTailHead = tail;
            tail = head;
            head = swapTailHead;
            return;
        }
        else{
            temp->next = copyHead;
            copyHead = temp;
            temp = forward;
            forward = forward->next;
        }
    }
}

Node* getMiddle(Node* head){
    Node* fast = head; Node* slow = head;
    if(head == NULL || head->next == NULL){
        return head;
    }
    while(fast->next != NULL){
        fast = fast->next;
        if(fast->next != NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

// Driver Code
int main(){
    Node* startNode = new Node(10);
    Node* trapNode = new Node(1);
    Node* finalNode = new Node(5);


    Node* head = startNode;
    head -> next = finalNode;

    Node* tail = finalNode;

    head -> trap = trapNode;

    cout << "ACCEPTING ALL STRINGS STARTING WITH A" << endl;
    char ctr[50];
    cout << "Enter string : ";
    cin >> ctr;
    int i = 0;

    Node* temp = head;

    while(ctr[i] != '\0'){
        if(ctr[i] == 'a' && temp == head){
            temp = head -> next;
            i++;
            continue;
        }

        if(ctr[i] == 'b' && temp == head){
            temp = head -> trap;
            i++;
            continue;
        }

        if(ctr[i] == 'a' && temp == tail || ctr[i] == 'b' && temp == tail){
            temp = tail;
            i++;
            continue;
        }

        if(ctr[i] == 'a' && temp == trapNode || ctr[i] == 'b' && temp == trapNode){
            temp = trapNode;
            i++;
            continue;
        }
    }

    if(temp == tail){
        cout << endl << "String Accepted" << endl << endl;
    }
    else{
        cout << endl << "String Rejected" << endl << endl;
    }

    cout << temp -> data;







    // print(head);
    // insertAtHead(head,0);
    // insertAtHead(head,0);
    // insertAtPosition(head,tail,2,15);
    // print(head);
    // insertAtPosition(head,tail,3,20);
    // print(head);
    // insertAtPosition(head,tail,4,25);
    // print(head);
    // insertAtPosition(head,tail,5,30);
    // print(head);

    return 0;
}




// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int value){
//         this->data = value;
//         this->next = NULL;
//     }
// };

// class LinkedList{
//     public:
//     Node* head = NULL;
//     void append(int value){
//         if(this->head == NULL){
//             Node* newNode = new Node(value);
//             this->head = newNode;
//             return;
//         }
//         else{
//             Node* temp = this->head;
//             while(temp->next != NULL){
//                 temp = temp->next;
//             }
//             Node* newNode = new Node(value);
//             temp->next = newNode;
//             return;
//         }
//     }
    
//     void print(){
//         Node* temp = this->head;
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }
// };
// int main(){
//     // Node* list = new Node(10);
//     LinkedList list;
//     list.append(10);
//     list.append(20);
//     list.append(20);
//     list.append(20);
//     list.append(20);
//     // Node* head = list;
//     list.print();
// }