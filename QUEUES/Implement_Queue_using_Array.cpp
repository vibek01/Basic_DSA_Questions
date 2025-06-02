#include <iostream>
using namespace std;

#define MAX_CAPACITY 1000

class ArrayQueue {
    int frontIndex;
    int rearIndex;
    int currentSize;
    int queueArray[MAX_CAPACITY];
public:
    ArrayQueue() {
        frontIndex = 0;
        rearIndex = -1;
        currentSize = 0;
    }

    bool enqueue(int element) {
        if (isFull()) {
            cout << "Queue Overflow" << endl;
            return false;
        }
        rearIndex = (rearIndex + 1) % MAX_CAPACITY;
        queueArray[rearIndex] = element;
        currentSize++;
        return true;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        int dequeuedElement = queueArray[frontIndex];
        frontIndex = (frontIndex + 1) % MAX_CAPACITY;
        currentSize--;
        return dequeuedElement;
    }

    int peekFront() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return queueArray[frontIndex];
    }

    bool isEmpty() {
        return (currentSize == 0);
    }

    bool isFull() {
        return (currentSize == MAX_CAPACITY);
    }
};

int main() {
    ArrayQueue myQueue;
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    cout << "Front element: " << myQueue.peekFront() << endl;  // 10

    cout << "Dequeued: " << myQueue.dequeue() << endl;         // 10
    cout << "Dequeued: " << myQueue.dequeue() << endl;         // 20

    cout << "Front element after dequeues: " << myQueue.peekFront() << endl;  // 30
    return 0;
}
