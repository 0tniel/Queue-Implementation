# Queue-Implementation
# Queue Implementations

This repository contains two implementations of a Queue:

1. **Queue Implementation Using Array**
2. **Queue Implementation Using C++ STL (Standard Template Library)**

A queue is a linear data structure that follows the First-In-First-Out (FIFO) principle, meaning the element inserted first will be the first to be removed. Queues are commonly used in many real-life applications like scheduling tasks, handling requests in web servers, or managing processes in operating systems.

## Queue Implementations

### 1. Queue Implementation Using Array

#### Description:
In this approach, a queue is manually implemented using an array. We maintain two pointers, `front` and `rear`, to keep track of the first and last elements in the queue, respectively. The queue supports the following operations:

- **Enqueue**: Adds an element to the rear of the queue.
- **Dequeue**: Removes the element from the front of the queue.
- **Display**: Displays the elements currently in the queue.
- **isFull and isEmpty**: Checks if the queue is full or empty.

#### Algorithm:

**Enqueue Operation:**
1. Check if the queue is full by checking if `rear == capacity - 1`.
2. If not full:
   - Increment `rear`.
   - Insert the new element at `arr[rear]`.
3. If the queue is initially empty (`front == -1`), set `front = 0`.

**Dequeue Operation:**
1. Check if the queue is empty by checking if `front == -1` or `front > rear`.
2. If not empty:
   - Remove the element at `arr[front]` and increment `front`.
3. If after removal, `front` exceeds `rear`, reset both `front` and `rear` to -1.

**Display Operation:**
1. Traverse the queue from `front` to `rear` and print each element.

#### Time Complexity:
- Enqueue: O(1)
- Dequeue: O(1)
- Display: O(n)
 <h3>2. Queue Implementation Using C++ STL</h3>

  <h4>Description:</h4>
    <p>This implementation utilizes the Standard Template Library (STL) in C++ to create a queue. The queue supports the following operations:</p>
    <ul>
        <li><strong>Enqueue</strong>: Adds an element to the rear of the queue.</li>
        <li><strong>Dequeue</strong>: Removes the element from the front of the queue.</li>
        <li><strong>Access Front and Rear</strong>: Allows access to the elements at the front and rear of the queue.</li>
        <li><strong>Check If Queue is Empty</strong>: Checks if the queue has no elements.</li>
    </ul>

   <h4>Algorithm:</h4>
    <h5>Enqueue Operation (push):</h5>
    <p>Use <code>q.push(value)</code> to insert an element at the rear of the queue.</p>

  <h5>Dequeue Operation (pop):</h5>
    <p>Use <code>q.pop()</code> to remove the front element from the queue.</p>

   <h5>Access Front and Rear:</h5>
    <ul>
        <li>Use <code>q.front()</code> to get the element at the front.</li>
        <li>Use <code>q.back()</code> to get the element at the rear.</li>
    </ul>

   <h5>Check If Queue is Empty:</h5>
    <p>Use <code>q.empty()</code> to check if the queue has no elements.</p>

   <h4>Time Complexity:</h4>
    <ul>
        <li>Enqueue: O(1)</li>
        <li>Dequeue: O(1)</li>
        <li>Access front/back: O(1)</li>
    </ul>
