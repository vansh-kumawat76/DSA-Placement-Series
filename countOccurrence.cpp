#include<iostream>
#include<vector>
using namespace std;

int cnt = 0;
void countOccurrence(vector<int> &nums, int i, int target){
    //base recursive
    if(i == nums.size()){
        return;
    }
     if(nums[i]==target){
        cnt++;
     }
     countOccurrence(nums,i+1,target);
}

int main(){
    vector<int> nums = {10,20,30,40,60,60,50};
    countOccurrence(nums,0,60);
    cout<<"count occurrence is :"<<cnt;
}