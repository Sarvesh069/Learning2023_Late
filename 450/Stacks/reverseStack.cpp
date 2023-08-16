#include<bits/stdc++.h>
using namespace std;


void displayStack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

void insertAtLast(int x, stack<int>& s){
    if(s.empty()){
        s.push(x);
        return;
    }
    int topE = s.top();
    s.pop();
    insertAtLast(x,s);
    s.push(topE);
}


void reverseStack(stack<int>& s){
    if(s.empty())
        return;
    else{
        int x = s.top();
        s.pop();
        reverseStack(s);
        insertAtLast(x,s);
    }
}


int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    displayStack(s);
    reverseStack(s);
    displayStack(s);
}