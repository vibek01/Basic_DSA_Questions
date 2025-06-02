#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
    int arr[SIZE];
    int front;
    int rear;
public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool enqueue(int x) {
        if ((rear + 1) % SIZE == front) {
            return false;  // queue is full
        }
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % SIZE;
        arr[rear] = x;
        return true;
    }

    int dequeue() {
        if (front == -1) {
            return -1;  // queue is empty
        }
        int value = arr[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
        return value;
    }

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return ((rear + 1) % SIZE == front);
    }
};

int main() {
    CircularQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout << q.isFull() << endl;  // 1
    cout << q.dequeue() << endl; // 10
    q.enqueue(60);
    cout << q.dequeue() << endl; // 20
    return 0;
}
