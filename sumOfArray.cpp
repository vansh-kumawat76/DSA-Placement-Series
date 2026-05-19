#include<iostream>
#include<vector>
using namespace std;

int sumOfArray(vector<int>& arr, int i){
    if(i==arr.size())
    return 0;
    
    int res = sumOfArray(arr, i+1);
    return arr[i]+res;
}

int main(){
    vector<int> arr = {10,20,30,40};
     cout<<"sum of array is :"<<sumOfArray(arr,0);
    
}