#include<bits/stdc++.h>
using namespace std;

class Stack {
    
public:
    int topOne, topTwo;
    int *arr;
    int size;
    Stack(int capacity) {
        // Write your code here.
        arr = new int(capacity);
        size = capacity;
        topOne = -1;
        topTwo = capacity;
    }

    void push(int order, int num) {
        // Write your code here.
        if(order == 1){
            if(topOne != topTwo-1){
                arr[++topOne] = num;
            cout<<num<<" pushed in stack "<<order<<endl;
            cout<<topOne<<" is current index of top"<<endl;
            }
        }
        else
        if(topTwo != topOne+1){
            arr[--topTwo] = num;
            cout<<num<<" pushed in stack "<<order<<endl;
            cout<<topTwo<<" is current index of top"<<endl;
        }

    }

    int pop(int order) {
        // Write your code here.
        if(order == 1){
        if(topOne != -1)
            return arr[topOne--];
        return -1;
        }
        else{
            if(topTwo != size)
                return arr[topTwo++];
            return -1;
        }
    }
    
    int top(int order) {
        // Write your code here
        if(order == 1){
            if(topOne != -1)
                return arr[topOne];
            return -1;
        }
        else{
            if(topTwo != size)
                return arr[topTwo];
            return -1;
        }        
    }
    
    int isEmpty(int order) {
        // Write your code here.
        if(order == 1)
            return topOne == -1;
        return topTwo == size;
    }
    
    int isFull(int order) {
        // Write your code here.
        if(order == 1)
            return topOne == topTwo-1;
        else
            return topTwo == topOne + 1;
    }
};

int main(){
    Stack st(5);
    st.push(1,4);
    st.push(1,3);
    st.push(2,6);
    st.push(2,7);
    cout<<st.top(2)<<" is the top element of Stack 2"<<endl;
    cout<<st.top(1)<<" is the top element of Stack 1"<<endl;
    st.push(1,27);
    cout<<st.isFull(1)<<endl;
    cout<<st.isFull(2)<<endl;
    cout<<st.pop(2)<<" popped from stack"<<endl;
    cout<<st.top(2)<<" is the top element"<<endl;
    
    return 0;
}