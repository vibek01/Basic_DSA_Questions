#include<iostream>
#include<algorithm>
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

int getLength(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

Node* addNumbersUsingList(Node* &head1, Node* &head2){
    int lengthOfHead1 = getLength(head1);
    int lengthOfHead2 = getLength(head2);
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }
    Node* tempOfList1 = head1; Node* tempOfList2 = head2;
    int crr[1000000] = {0}, k = 0;
    if(lengthOfHead1 >= lengthOfHead2){
        while(tempOfList1 != NULL){
            crr[k] = tempOfList1->data + tempOfList2->data;
            if(tempOfList1->next == NULL && crr[k] >= 10){
                crr[k] = crr[k] % 10;
                crr[k + 1] = 1;
                k = k + 2;
                goto abc;
                cout<<"aaiyan"<<endl;
            }
            if(crr[k] >= 10){
                crr[k] = crr[k] % 10;
                tempOfList1->next->data = tempOfList1->next->data + 1;
            }
            k++;
            tempOfList1 = tempOfList1->next;
            if(tempOfList2->next == NULL){
                tempOfList2->data = 0;
            }
            if(tempOfList2->next != NULL){
                tempOfList2 = tempOfList2->next;
            }
        }
    }
    else{
        while(tempOfList2 != NULL){
            crr[k] = tempOfList1->data + tempOfList2->data;
            if(tempOfList2->next == NULL && crr[k] >= 10){
                crr[k] = crr[k] % 10;
                crr[k + 1] = 1;
                k = k + 2;
                goto abc;
            }
            if(crr[k] >= 10){
                crr[k] = crr[k] % 10;
                tempOfList2->next->data = tempOfList2->next->data + 1;
            }
            k++;
            if(tempOfList1->next == NULL){
                tempOfList1->data = 0;
            }
            if(tempOfList1->next != NULL){
                tempOfList1 = tempOfList1->next;
            }
            tempOfList2 = tempOfList2->next;
        }
    }
    abc:
    k--;
    int count = 0;
    Node* node3 = new Node(crr[count]);
    Node* head3 = node3;
    count++;
    int position = 2;
    while(count != (k+1)){
        insertAtPosition(head3,position,crr[count]);
        count++;
        position++;
    }
    return head3;
}

int main(){
    //creating node1
    Node* node1 = new Node(9);
    Node* head1 = node1;
    // insertAtPosition(head1,2,8);
    // insertAtPosition(head1,3,1);
    print(head1);

    //creating node2
    Node* node2 = new Node(6);
    Node* head2 = node2;
    insertAtPosition(head2,2,9);
    insertAtPosition(head2,3,9);
    print(head2);

    Node* node3 = addNumbersUsingList(head1, head2);
    print(node3);
    return 0;
}






















































//Node *addTwoNumbers(Node* &num1, Node* &num2){
//     // Write your code here.
//     Node* temp1 = num1;
//     Node* temp2 = num2;
//     int arr[10000] = {0};
//     int brr[10000] = {0};
//     int crr[10000] = {0};
//     int arrSize = sizeof(arr)/sizeof(arr[0]);
//     int brrSize = sizeof(brr)/sizeof(brr[0]);
//     int crrSize = sizeof(crr)/sizeof(crr[0]);
//     int i = 0, j = 0, k = 0;
//     while(temp1 != NULL){
//         arr[i] = temp1->data;
//         temp1 = temp1->next;
//         i++;
//     }
//     while(temp2 != NULL){
//         brr[j] = temp2->data;
//         temp2 = temp2->next;
//         j++;
//     }
//     for(int i = 0; i<arrSize; i++){
//         if(arr[i] == 0) {
//         arrSize = i;    
//         break;
//         }
//     }
//     for(int j = 0; j<brrSize; j++){
//         if(brr[j] == 0) {
//         brrSize = j;
//         break;
//         }
//     }
//     reverse(arr, arr + arrSize);
//     reverse(brr, brr + brrSize);
//     if(i > j){
//     while(i != 0){
//         crr[k] = arr[i-1] + brr[j-1];
//         if(crr[k] >= 10){
//             crr[k] = crr[k] % 10;
//             brr[j-2] = brr[j-2] + 1;
//         }
//             i--;
//             j--;
//             k++;
//         }
//     }
//     else{
//         while(j != 0){
//         crr[k] = arr[i-1] + brr[j-1];
//         if(crr[k] >= 10){
//             crr[k] = crr[k] % 10;
//             brr[j-2] = brr[j-2] + 1;
//         }
//             i--;
//             j--;
//             k++;
//         }
//     }
//     for(int k = 0; k<crrSize; k++){
//         if(crr[k] == 0){
//         crrSize = k;    
//         break;
//         }
//     }
//     reverse(crr, crr + crrSize);
//     Node* node3 = new Node(crr[k-1]);
//     Node* head = node3;
//     k--; 
//     int position = 2;
//     for(int i = k-1; i>=0; i--){
//         insertAtPosition(head, position, crr[i]);
//         position++;
//     }
//     return head;
// }