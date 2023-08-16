#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int n, index = -1;
    int *arr;
    int *temp;
    int mini = INT_MAX;

    Stack(int size){
        n = size;
        arr = new int[size];
        temp = new int[size];
    }

    bool push(int x){
        //Check for overflow
        if(index+1 == n)
            return false;
        //Insert value in array
        arr[index+1] = x;
        //Update mini
        mini = min(mini,x);
        //Update temp
        temp[index+1] = mini;
        //Update index
        index++;
        return true; 
    }

    int pop(){
        //Check for Underflow
        if(index == 0)
            return -1;
        int x = arr[index];
        index--;
        return x;
    }

    int getMin(){
        return temp[index];
    }
};

int main(){
    Stack s(5);
    cout<<s.push(4)<<" ";
    cout<<s.push(3)<<" ";
    cout<<s.push(41)<<" ";
    cout<<s.push(0)<<" ";
    cout<<s.pop()<<" ";
    cout<<s.getMin()<<" ";
    cout<<s.pop()<<" ";
    cout<<s.getMin()<<" ";
    cout<<s.push(-1)<<" ";
    cout<<s.push(3)<<endl;
    cout<<s.getMin()<<endl;
}