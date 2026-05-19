#include<iostream>
#include<vector>
using namespace std;

int lastOccurence(vector<int> &arr, int i, int target){
    //base case
    if(i==-1){
        return -1;
    }
    if(arr[i]==target){
       return i;
    }
    return lastOccurence(arr, i-1, target);
}

int main(){
    vector<int> arr = {10,20,30,15};
    cout<<lastOccurence(arr, arr.size()-1, 30);
}