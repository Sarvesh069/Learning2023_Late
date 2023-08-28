#include<bits/stdc++.h>
using namespace std;

class QueueStack{
    private:
        queue<int>q1;
        queue<int>q2;
    public:
        void push(int);
        int pop();
};

void QueueStack :: push(int x){
    //Simply push into queue
    q1.push(x);
}

int QueueStack :: pop(){

    //If queue is empty return -1
    if(q1.empty())
        return -1;
    //Push all elements of q1 into q2 except last element

    int i = q1.size();
    while(i>1){
        int data = q1.front();
        q2.push(data);
        q1.pop();
        i--;
    }

    while(!q2.empty()){
        int data = q2.front();
        q1.push(data);
        q2.pop();
    }

    int element = q1.front();
    q1.pop();
    return element;
}

int main(){
    QueueStack q;
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    q.push(5);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    return 0;
}