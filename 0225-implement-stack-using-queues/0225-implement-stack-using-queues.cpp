#include<stack>
class MyStack {
public:
stack<int> Q1;
    MyStack() {
 
    }
    
    void push(int x) {
        Q1.push(x);
        int size=Q1.size();
        for(int i=0;i<size-1;i++){
            Q1.push(Q1.top());
            Q1.pop();
        }
    }
    
    int pop() {
       int topValue = Q1.top();
        Q1.pop();
        return topValue;
    }
    
    int top() {
        return Q1.top();
    }
    
    bool empty() {
        return Q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */