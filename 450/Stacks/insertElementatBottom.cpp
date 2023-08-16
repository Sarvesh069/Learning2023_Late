#include<bits/stdc++.h>
using namespace std;

void displayStack(stack<int>st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}


void insertAtBottom(stack<int>&s, int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    else{
        int x = s.top();
        s.pop();
        insertAtBottom(s,element);
        s.push(x);
    }
}


int main(){
stack<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
int element = 12;
displayStack(s);
cout<<endl;
insertAtBottom(s,element);
displayStack(s);
}