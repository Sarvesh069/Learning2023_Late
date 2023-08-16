#include<bits/stdc++.h>
using namespace std;

string reverseString(string &str){
    stack<char>st;
    for(int i=0;i<str.length();i++){
        st.push(str[i]);
    }
    str = "";
    while(!st.empty()){
        str += st.top();
        st.pop();
    }
    return str;
}


int main(){
    string str = "Sarvesh";
    cout<<reverseString(str);
    return 0;
}