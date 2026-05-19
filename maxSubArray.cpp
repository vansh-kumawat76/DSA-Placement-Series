#include<iostream>
#include<vector>
using namespace std;

int subArraySum(vector<int> &nums){
int sum =0, maxi = INT_MIN;

for(int i=0; i<nums.size(); i++){
    sum = sum + nums[i];
    maxi = max(maxi,sum);

    if(sum<0)
    sum = 0;
}
return maxi;
}
int main(){
    vector<int> nums = {5,4,-1,7,8};
  int res  =  subArraySum(nums);
  cout<<"maximum subarray is :"<<res<<endl;
}