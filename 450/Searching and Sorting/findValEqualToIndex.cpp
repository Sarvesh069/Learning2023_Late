//School Problem
#include<bits/stdc++.h>
using namespace std;

vector<int> findValueEqualToIndex(vector<int>arr){
    vector<int>res;
	    for(int i=0;i<arr.size();i++){
	        if(arr[i] == i+1)
	            res.push_back(i+1);
	    }
	    return res;
}

void printArray(vector<int>res){
    for(auto x : res)
        cout<<x<<" ";
}

int main(){
    #ifndef ONLINE_JUDGE
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
#endif
    int size,ele;
    cin>>size;
    vector<int>arr,res;
    for(int i=0;i<size;i++){
        cin>>ele;
        arr.push_back(ele);
    }
    res = findValueEqualToIndex(arr);
    printArray(res);
    return 0;
}