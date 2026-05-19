#include<iostream>
#include<vector>
using namespace std;

bool checkArraySorted(vector<int> &arr, int i){
    //base case 
    if(i==arr.size()-1){
        return true;
    }

    //recursive case 
    if(arr[i]>arr[i+1]){
        return false;
    }
    return checkArraySorted(arr, i+1);
}


int main(){
    vector<int> arr = {10,20,100,40,50};
    if(checkArraySorted(arr,0)) {
        cout<<"is sorted array";
    }
    else {
        cout<<"not a sorted array";
    }
}