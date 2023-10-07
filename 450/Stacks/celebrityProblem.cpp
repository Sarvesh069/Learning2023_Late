#include<bits/stdc++.h>
using namespace std;

bool knows(int A, int B, vector<vector<int>> matrix){
    if(matrix[A][B] == 0)
        return false;
    return true;
}

int findTheCelebrity(vector<vector<int>>& matrix){
    stack<int>st;
    //Add all ids in the stack
    for(int i=0;i<matrix.size();i++){
        st.push(i);
    }
    while(st.size()>1){
    int A = st.top();
    st.pop();
    int B = st.top();
    st.pop();
    
        if(knows(A,B,matrix)){
            if(!knows(B,A,matrix))
                st.push(B);
        }
        else{
            if(knows(B,A,matrix))
                st.push(A);
        }
    }
    if(st.empty())
        return -1;
    int check =  st.top(); //Check can be the celebrity
	 for(int i=0;i<matrix.size();i++){

		 if((check != i ) && !knows(i,check,matrix)) //All knows celebrity
		 	return -1;
	 }
	 return check; 
}

int main(){
    vector<vector<int>> matrix = {{0,0,1,0},{0,0,1,0},{0,0,0,0},{0,0,1,0}};
    int celeb = findTheCelebrity(matrix);
    cout<<celeb<<endl;
    return 0;
}