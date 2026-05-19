#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int maximumElementArray(vector<int>& nums, int i){
    if(i==nums.size())
    return INT_MIN;
    
    int res = maximumElementArray(nums,i+1);
    return max(nums[i],res);
}

int main(){
    vector<int> nums = {10,-20,-30,-40,-10};
    cout<<"maximum element in array is :"<<maximumElementArray(nums,0);
}
