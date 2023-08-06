#include<bits/stdc++.h>
using namespace std;

pair<int,int> firstAndLast(vector<int>arr, int target){
    int low = 0, high = arr.size()-1;
    int first = -1, second = -1;
    while(low<=high){
        //find first
        int mid = low + (high-low)/2;
        if(arr[mid] >= target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    first = low;

    //Find last
    low = 0, high = arr.size()-1;
    while(low<=high){
        //find first
        int mid = low + (high-low)/2;
        if(arr[mid] <= target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    second = high;
    if(arr[first] == arr[second])
        return {first,second}; //Missed this edge case
    return {-1,-1};
}


int main(){
    vector<int> arr = {1,3,5,5,5,5,67,123,125};
    pair<int,int> res;
    int x = 5;
    res = firstAndLast(arr,x);
    return 0;
}