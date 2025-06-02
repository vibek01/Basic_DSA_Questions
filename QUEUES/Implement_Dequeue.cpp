#include <iostream>
using namespace std;

#define MAX 10

class Deque {
    int arr[MAX];
    int front;
    int rear;
public:
    Deque() {
        front = -1;
        rear = 0;
    }

    bool isFull() {
        return ((front == 0 && rear == MAX - 1) || front == rear + 1);
    }

    bool isEmpty() {
        return (front == -1);
    }

    void insertFront(int x) {
        if (isFull()) {
            return;
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (front == 0) {
            front = MAX - 1;
        } else {
            front = front - 1;
        }
        arr[front] = x;
    }

    void insertRear(int x) {
        if (isFull()) {
            return;
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (rear == MAX - 1) {
            rear = 0;
        } else {
            rear = rear + 1;
        }
        arr[rear] = x;
    }

    void deleteFront() {
        if (isEmpty()) {
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (front == MAX - 1) {
            front = 0;
        } else {
            front = front + 1;
        }
    }

    void deleteRear() {
        if (isEmpty()) {
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (rear == 0) {
            rear = MAX - 1;
        } else {
            rear = rear - 1;
        }
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }
};

int main() {
    Deque dq;
    dq.insertRear(5);
    dq.insertRear(10);
    dq.insertFront(3);
    cout << dq.getFront() << endl; // 3
    cout << dq.getRear() << endl;  // 10
    dq.deleteFront();
    cout << dq.getFront() << endl; // 5
    return 0;
}
