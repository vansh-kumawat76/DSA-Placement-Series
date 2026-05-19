#include<iostream>
#include<vector>
using namespace std;

bool linearSearch(vector<int> nums, int i, int target){
    //base case
    if(i == nums.size()){
        return false;
    }
    //recursive case
    if(nums[i] == target){
        return true;
    }

    return linearSearch(nums, i+1, target);
    
}

int main(){
    vector<int> nums = {10,20,30,40};
    
      if(linearSearch(nums,0,1500))
      {
           cout<<"yes";
      }
      else {
        cout<<"no";
      }
}