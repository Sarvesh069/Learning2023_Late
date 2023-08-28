#include<bits/stdc++.h>
using namespace std;

class Queue {
    public:
    //Declare the array
    int *arr;
    int front = 0;
    int back = -1;
    //Constructor Class
    Queue(){
        arr = new int[1000];
    }

    //Queue is Empty
    bool isEmpty(){
        if(front>back)
            return false;
        return true;
    }

    //Push the element
    void enqueue(int data){
        back++;
        arr[back] = data;
    }

    //Delete the Element
    int dequeue(){
        int element = arr[front];
        front++;
        return element;
    }

    //Return the front element
    int frontElement(){
        if(front>back)
            return -1;
        return arr[front];
    }

};

int main(){
    Queue q1;
    q1.enqueue(3);
    cout<<q1.frontElement()<<endl;
    q1.enqueue(4);
    q1.enqueue(5);
    cout<<q1.dequeue()<<endl;
    cout<<q1.frontElement();
}