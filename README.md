<body>
    <h1>Queue Implementations in C++</h1>
    <h2>Aim</h2>
    <p>
        To implement and study two methods for handling queues in C++: one using a custom array-based approach and another using the C++ Standard Template Library (STL). This comparison highlights the differences between a manual implementation and the ready-made functionality provided by STL.
    </p>
    <h2>Algorithm</h2>
    <h3>Array-Based Queue</h3>
    <ol>
        <li>Initialize the queue with a given capacity.</li>
        <li>To <b>push</b> an element:
            <ul>
                <li>If the queue is full, print an overflow message.</li>
                <li>If the queue is empty, set the front and rear pointers to 0.</li>
                <li>Insert the element at the rear and increment the rear pointer.</li>
            </ul>
        </li>
        <li>To <b>pop</b> an element:
            <ul>
                <li>If the queue is empty, print an underflow message.</li>
                <li>Increment the front pointer to remove the front element.</li>
                <li>If the queue becomes empty after popping, reset both front and rear pointers to -1.</li>
            </ul>
        </li>
        <li>To <b>peek</b> the front element, return the element at the front pointer unless the queue is empty.</li>
    </ol>
    <h3>STL-Based Queue</h3>
    <ol>
        <li>Initialize an empty queue using the <code>std::queue</code> from C++ STL.</li>
        <li>Use <code>push()</code> to insert elements into the queue.</li>
        <li>Use <code>pop()</code> to remove the front element of the queue.</li>
        <li>Use <code>front()</code> to get the front element without removing it.</li>
    </ol>
    <h2>Explanation</h2>
    <h3>Array-Based Queue</h3>
    <p>
        This implementation manually handles all the core operations of a queue. The queue has a fixed capacity, and we manage the insertion (push), removal (pop), and retrieval (peek) of elements using array indices. While this approach gives more control over memory and performance, it requires more code and can be less efficient in terms of dynamic resizing and error handling.
   <h3>STL-Based Queue</h3>
    <ol>
        <li>Initialize an empty queue using the <code>std::queue</code> from C++ STL.</li>
        <li>To <b>push</b> an element:
            <ul>
                <li>Use <code>push()</code> to insert elements into the queue.</li>
            </ul>
        </li>
        <li>To <b>pop</b> an element:
            <ul>
                <li>Use <code>pop()</code> to remove the front element of the queue.</li>
            </ul>
        </li>
        <li>To <b>peek</b> the front element:
            <ul>
                <li>Use <code>front()</code> to get the front element without removing it.</li>
            </ul>
        </li>
    </ol>
    <h3>STL-Based Queue</h3>
    <p>
        The STL-based queue uses the C++ Standard Library to provide an efficient and straightforward implementation. It dynamically adjusts its size and offers built-in methods for pushing, popping, and accessing the front element. This implementation reduces code complexity and enhances flexibility in handling varying data sizes.
    </p>
