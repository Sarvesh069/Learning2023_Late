#include<bits/stdc++.h>
using namespace std;

bool ispar(string x)
    {
        // Your code here
        stack<char>s;
        for(int i=0;i<x.length();i++){
            if(x[i] == '[' || x[i] == '{' || x[i] == '(')
                s.push(x[i]);
            else{
                if(!s.empty() && x[i] == ']' && s.top() == '[')
                    s.pop();
                else if(!s.empty() && x[i] == '}' && s.top() == '{')
                    s.pop();
                else if(!s.empty() && x[i] == ')' && s.top() == '(')
                    s.pop();
                else
                    return false;
                }
        }
        return s.empty();
    }
int main(){
    string x = "{{())}}";
    if(ispar(x))
        cout<<"Balanced";
    else
        cout<<"Not Balanced";
    return 0;
}