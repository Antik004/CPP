#include <iostream>
using namespace std;

// Define a namespace
namespace MyQueueNamespace {

    template <typename T>
    class Queue {
    private:
        int front, rear, size, capacity;
        T* queueArray;

    public:
        // Constructor
        Queue(int cap) : capacity(cap), front(0), size(0), rear(cap - 1) {
            queueArray = new T[capacity];
        }

        // Destructor
        ~Queue() {
            delete[] queueArray;
        }

        // Check if the queue is full
        bool isFull() const {
            return size == capacity;
        }

        // Check if the queue is empty
        bool isEmpty() const {
            return size == 0;
        }

        // Add an item to the queue
        void enqueue(T item) {
            if (isFull()) {
                cout << "Queue is full. Cannot enqueue " << item << endl;
                return;
            }
            rear = (rear + 1) % capacity;
            queueArray[rear] = item;
            size++;
            cout << item << " enqueued to queue" << endl;
        }

        // Remove an item from the queue
        T dequeue() {
            if (isEmpty()) {
                cout << "Queue is empty. Cannot dequeue" << endl;
                return T(); // Return default value of T
            }
            T item = queueArray[front];
            front = (front + 1) % capacity;
            size--;
            return item;
        }

        // Get the front item of the queue
        T getFront() const {
            if (isEmpty()) {
                cout << "Queue is empty. No front item" << endl;
                return T(); // Return default value of T
            }
            return queueArray[front];
        }

        // Get the rear item of the queue
        T getRear() const {
            if (isEmpty()) {
                cout << "Queue is empty. No rear item" << endl;
                return T(); // Return default value of T
            }
            return queueArray[rear];
        }
    };
}

int main() {
    // Use the Queue from the namespace
    MyQueueNamespace::Queue<int> intQueue(5); // Queue of integers with capacity 5

    intQueue.enqueue(10);
    intQueue.enqueue(20);
    intQueue.enqueue(30);
    intQueue.enqueue(40);
    intQueue.enqueue(50);
    intQueue.enqueue(60); // Should show an error because the queue is full

    cout << "Dequeued: " << intQueue.dequeue() << endl;

    cout << "Front item: " << intQueue.getFront() << endl;
    cout << "Rear item: " << intQueue.getRear() << endl;

    // Use the Queue from the namespace for strings
    MyQueueNamespace::Queue<string> stringQueue(3); // Queue of strings with capacity 3

    stringQueue.enqueue("Hello");
    stringQueue.enqueue("World");
    stringQueue.enqueue("!");

    cout << "Dequeued: " << stringQueue.dequeue() << endl;

    cout << "Front item: " << stringQueue.getFront() << endl;
    cout << "Rear item: " << stringQueue.getRear() << endl;

    return 0;
}
