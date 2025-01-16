class MyQueue {
private:
    queue<int> input;  // Queue to hold incoming elements
    queue<int> output; // Queue to hold elements for output

public:
    MyQueue() {
        // Constructor does not need any initialization for the queues
    }
    
    void push(int x) {
        input.push(x); // Add element to the input queue
    }
    
    int pop() {
        peek(); // Ensure all elements are in the output queue
        int val = output.front(); // Get the front element of the output queue
        output.pop(); // Remove it from the output queue
        return val;
    }
    
    int peek() {
        if (output.empty()) { // If output queue is empty, transfer from input queue
            while (!input.empty()) {
                output.push(input.front());
                input.pop();
            }
        }
        return output.front(); // Return the front element of the output queue
    }
    
    bool empty() {
        // The queue is empty if both input and output queues are empty
        return input.empty() && output.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
