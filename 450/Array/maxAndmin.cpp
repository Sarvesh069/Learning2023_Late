#include<bits/stdc++.h>
using namespace std;

int maximumArray(int arr[], int size){
    int maxi = INT_MIN;
    for(int i=0;i<size;i++){
        if(maxi<arr[i])
            maxi = arr[i];
    }
    return maxi;
}

int minimumArray(int arr[], int size){
    int mini = INT_MAX;
    for(int i=0;i<size;i++){
        if(mini>arr[i])
            mini = arr[i];
    }
    return mini;
}

int main(){
    #ifndef ONLINE_JUDGE
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
    #endif
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<maximumArray(arr,size)<<endl;
    cout<<minimumArray(arr,size);
    return 0;
}