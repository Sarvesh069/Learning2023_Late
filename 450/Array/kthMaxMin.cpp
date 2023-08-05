#include<bits/stdc++.h>
using namespace std;

int kthMaximumArray(int arr[], int size, int k){
    sort(arr,arr+size);
    
    return arr[size-k];
}

int kthMinimumArray(int arr[], int size, int k){
    sort(arr,arr+size);
    return arr[k-1];
}


int main(){
    #ifndef ONLINE_JUDGE
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
    #endif
    int size,k;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cin>>k;
    cout<<kthMaximumArray(arr,size,k)<<endl;
    cout<<kthMinimumArray(arr,size,k);
    return 0;
}