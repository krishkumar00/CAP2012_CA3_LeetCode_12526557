class MinStack {
    stack<pair<int, int>> st;

public:
    void push(int val) {
        int mini = val;

        if (!st.empty())
            mini = min(val, st.top().second);

        st.push({val, mini});
    }

    void pop() {
        st.pop();
    }

    int top() {
        return st.top().first;
    }

    int getMin() {
        return st.top().second;
    }
};
