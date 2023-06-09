class MyStack {
private:
    queue<int> q1;
    queue<int> q2;

public:
    MyStack() {}

    void push(int x) {
        if (q1.empty()) {
            q1.push(x);
            while (!q2.empty()) {
                q1.push(q2.front());
                q2.pop();
            }
        } else {
            q2.push(x);
            while (!q1.empty()) {
                q2.push(q1.front());
                q1.pop();
            }
        }
    }

    int pop() {
        int element;
        if (!q1.empty()) {
            element = q1.front();
            q1.pop();
        } else {
            element = q2.front();
            q2.pop();
        }
        return element;
    }

    int top() {
        if (!q1.empty()) {
            return q1.front();
        } else {
            return q2.front();
        }
    }

    bool empty() {
        return q1.empty() && q2.empty();
    }
};
