#include<bits/stdc++.h>
using namespace std;
vector<long long> nextSmallerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long>st;
        vector<long long>res(arr);
        int i = n-1;
        while(i>-1){
        //If stack is empty then push -1 and push element in stack
        if(st.empty()){
            res[i] = -1;
        }
        //If current element is less than the top element of Stack - Found greater element
        else if(arr[i]>st.top()){
            res[i] = st.top();
        }
        else{
            while(!st.empty() && arr[i]<=st.top())
                st.pop();
            if(st.empty())
            {
                res[i] = -1;
            }
            else{
                res[i] = st.top();
            }
        }
        st.push(arr[i]);
        i--;
        }
    return res;
}

void displayArray(vector<long long> arr){
    for(auto x : arr)
        cout<<x<<" ";
}

int main(){
    vector<long long> arr = {1,3,0,0,1,2,4,1};
    vector<long long> res = nextSmallerElement(arr,8);
    displayArray(res);
    return 0;
}