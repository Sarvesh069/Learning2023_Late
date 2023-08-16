#include<bits/stdc++.h>
using namespace std;

//Implementing N Stacks
class NStack{
    public:

    int n, s, freespot = 0;
    int *arr;
    int *next;
    int *top;
    
    NStack(int size,int stack){
        n = size;
        s = stack;
        arr = new int[size];
        top = new int[stack];
        next = new int[size];

        //Initialize the top
        for(int i=0;i<s;i++){
            top[i] = -1;
        }

        for(int i=0;i<n;i++){
            next[i] = i+1;
        }
        next[s-1] = -1;
    }

    bool push(int x, int m){
        //Check for overflow
        if(freespot == -1)
            return false;
        //Find index
        int index = freespot;
        //Update freespot
        freespot = next[index];
        //Push in the element
        arr[index] = x;
        //Update next
        next[index] = top[m-1];
        //Update top
        top[m-1] = index;
        return true;
    }
    
    int pop(int m){
        //Reverse of Push
        //Check for underflow
        if(top[m-1] == -1)
            return -1;
        int index = top[m-1];
        top[m-1] = next[index];
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }

};


int main(){
    NStack st(5,3);
    cout<<st.push(3,1)<<endl;
    cout<<st.push(4,1)<<endl;
    cout<<st.push(7,2)<<endl;
    cout<<st.pop(1)<<endl;
    cout<<st.pop(2)<<endl;
    cout<<st.pop(2)<<endl;
    cout<<st.pop(1)<<endl;
    cout<<st.pop(1)<<endl;
}