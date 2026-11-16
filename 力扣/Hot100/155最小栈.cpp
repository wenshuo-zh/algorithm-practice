class MinStack {
public:
    stack<int> st;
    stack<int> minst;
    MinStack() {

    }
    
    void push(int value) {
        st.push(value);
        if(minst.empty() || minst.top() >= value){
            minst.push(value);
        }
    }
    
    void pop() {
        
        if(!minst.empty() && minst.top() == st.top())minst.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
