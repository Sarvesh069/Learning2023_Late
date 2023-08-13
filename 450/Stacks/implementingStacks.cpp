#include<bits/stdc++.h>
using namespace std;

class Stack {
    
public:
    int topE;
    int *arr;
    int size;
    Stack(int capacity) {
        // Write your code here.
        arr = new int(capacity);
        size = capacity;
        topE = -1;
    }

    void push(int num) {
        // Write your code here.
        if(topE != size){
            arr[++topE] = num;
        }


    }

    int pop() {
        // Write your code here.
        if(topE != -1){
        int element = arr[topE];
        topE--;
        return element;
        }
        return -1;
        
    }
    
    int top() {
        // Write your code here
        if(topE != -1)
            return arr[topE];
        return -1;
        
    }
    
    int isEmpty() {
        // Write your code here.
        return topE == -1;
    }
    
    int isFull() {
        // Write your code here.
        return topE == size;
    }
    
};

int main(){
    Stack st(8);
    st.push(4);
    st.push(3);
    cout<<st.top()<<" is the top element"<<endl;
    cout<<st.pop()<<" popped from stack"<<endl;
    cout<<st.top()<<" is the top element"<<endl;
    cout<<st.isEmpty()<<endl;
    cout<<st.isFull()<<endl;
    return 0;
}