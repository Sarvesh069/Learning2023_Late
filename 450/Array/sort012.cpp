#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void sort012(int arr[], int size){
    int low = 0, high = size-1, mid = 1;
    while(mid<=high){
        if(arr[mid] == 2){
            swap(arr[mid],arr[high]);
            high--;
        }
        else if(arr[mid] == 1)
            mid++;
        else{
            swap(arr[low], arr[mid]);
            low++;
        }
    }
    printArray(arr,size);
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
    printArray(arr,size);
    cout<<endl;
    sort012(arr,size);
    return 0;
}