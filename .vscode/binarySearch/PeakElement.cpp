#include<iostream>
#include<vector>
using namespace std;
int findPeakElement(vector<int>& nums){
    int start =0, end = nums.size()-1;
    while(start<end){
        int mid = (start+end)/2;
        if(nums[mid]<nums[mid+1]){
            start = mid+1;
        }
        else {
            end = mid;
        }
    }
    return start;
}
int main(){
    vector<int> nums = {1,2,1,3,5,6,4};
  int ans = findPeakElement(nums);
  cout<<"peak element is :"<<ans;
}