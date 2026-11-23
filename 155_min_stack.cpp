class MinStack {
private:
    std::vector<int> data_;
    std::vector<int> mins_;

public:
    MinStack() = default;
    
    void push(int value) {
        data_.push_back(value);
        if (mins_.empty() || value <= mins_.back() )
        {
            mins_.push_back(value);
        }
    }
    
    void pop() {
        if (data_.back() == mins_.back() )
        {
            mins_.pop_back();
        }
        data_.pop_back();   
    }
    
    int top() const {
        return data_.back();
    }
    
    int getMin() const {
        return mins_.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */