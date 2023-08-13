#include<bits/stdc++.h>
using namespace std;

void func(stack<int>&s, int cnt, int size){
        if(cnt == size/2){
            s.pop();
            return;
        }
        else{
            int element = s.top();
            s.pop();
            func(s,cnt+1,size);
            s.push(element);
        }
}
void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int cnt = 0;
        func(s,cnt,sizeOfStack);
    }

void displayStack(stack<int>s){
    while (!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int sizeOfStack = 5;
    deleteMid(s,sizeOfStack);
    displayStack(s);
}