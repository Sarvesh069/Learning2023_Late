#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int size){
    int i = 0, j = size-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
    #endif
    int arr[5] = {3,5,-1,6,2};
     printArray(arr,5);
    reverseArray(arr,5);
    printArray(arr,5);
    return 0;
}
