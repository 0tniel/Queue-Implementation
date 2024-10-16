#include <iostream>
using namespace std;

class Queue 
{
    public:
    int capacity;
    int front;
    int rear;
    int* arr;

    // Constructor
    Queue(int capacity) 
    {
        this->capacity = capacity;
        arr = new int[capacity];
        front = -1;
        rear = -1;  
    }

    // Push function to insert elements in the queue
    void push(int element) 
    {
        // Check if queue is full
        if (rear == capacity - 1) 
        {
            cout << "Queue Overflow" << endl;
            return;
        }

        // If the queue is empty, initialize front and rear
        if (front == -1) 
        {
            front = 0;
        }

        rear++;
        arr[rear] = element;
    }

    // Pop function to remove elements from the queue
    void pop() 
    {
        // Check if queue is empty
        if (front == -1 || front > rear) 
        {
            cout << "Queue Underflow" << endl;
            return;
        }

        // Move front pointer to the next element
        front++;
        
        // If the queue becomes empty after popping
        if (front > rear) 
        {
            front = rear = -1;
        }
    }

    // Peek function to get the front element of the queue
    int peek() 
    {
        if (front != -1) 
        {
            return arr[front];
        } 
        else 
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
    }

    // Destructor to free memory
    ~Queue() 
    {
        delete[] arr;
    }
};

int main() 
{
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.peek() << endl;

    q.pop();
    cout << "Front element after pop: " << q.peek() << endl;

    q.pop();
    q.pop();
    q.pop();  // This should give "Queue Underflow" message

    return 0;
}

