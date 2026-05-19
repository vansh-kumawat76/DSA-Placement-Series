#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> &arr, int i, int target){
    //base case
    if(i==arr.size()){
        return -1;
    }

    //recursive case
    if(arr[i] == target){
        return i;
    }
    return firstOccurence(arr,i+1,target);
}

int main(){
    vector<int> arr = {10,20,40,50,60};
    cout<<firstOccurence(arr,0,40);
}