#include <stack>

class MyQueue {
private:
    std::stack<int> pushStack;
    std::stack<int> popStack;

public:
    void push(int x) {
        pushStack.push(x);
    }

    int pop() {
        peek();  // Ensure popStack is up-to-date
        int top = popStack.top();
        popStack.pop();
        return top;
    }

    int peek() {
        if (popStack.empty()) {
            while (!pushStack.empty()) {
                popStack.push(pushStack.top());
                pushStack.pop();
            }
        }
        return popStack.top();
    }

    bool empty() {
        return pushStack.empty() && popStack.empty();
    }
};
