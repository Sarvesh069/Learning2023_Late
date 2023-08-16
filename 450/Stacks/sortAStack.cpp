#include<bits/stdc++.h>
using namespace std;

void displayStack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

void insertStack(stack<int>&s, int element){
    if(s.empty() || s.top()>= element){
        s.push(element);
        return;
    }
    else{
        int x = s.top();
        s.pop();
        insertStack(s,element);
        s.push(x);
        return;
    }
}

void sortStack(stack<int>s){
    stack<int>res;
    while(!s.empty()){
        int element = s.top();
        s.pop();
        insertStack(res,element);
    }
    displayStack(res);
}

int main(){
    stack<int>s;
    s.push(1);
    s.push(4);
    s.push(13);
    s.push(42);
    displayStack(s);
    sortStack(s);
}