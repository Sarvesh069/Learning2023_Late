#include<bits/stdc++.h>
using namespace std;

class MinStack{

    stack<int>st;
    int mini = INT_MAX;
    public:
    void push(int data){
        //Inserting First element
        if(st.empty()){
            //Normal push
            st.push(data);
            mini = min(mini,data); //Updated mini
        }
        //Second element onwards
        if(data<mini){
            int val = 2*data - mini;
            st.push(val);
            mini = data;
        }
        else{
            st.push(data);
        }
    }  

    void pop(){
        if(st.top()>mini)
            st.pop();
        else{
            int val = 2*mini - st.top();
            mini = val;
            st.pop();
        }
    }
    
    int topC(){
        if(st.top()>mini)
            return st.top();
        else{
            return 2*mini - st.top();
        }
    }

    int getMin(){
        return mini;
    }
};

int main(){
    MinStack ms;
    ms.push(-2);
    ms.push(0);
    ms.push(-3);
    cout<<ms.getMin()<<endl;
    ms.pop();
    cout<<ms.topC()<<endl;
    cout<<ms.getMin()<<endl;
    return 0;
}
