#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int> &height){
    int i=0, j= height.size()-1;
      int maxWater =0;
    while(i<j){
        int width = j-i;
        int ht = min(height[i],height[j]);
        int currWater = width*ht;
        maxWater = max(maxWater,currWater);
        
        height[i] < height[j] ? i++ : j--;
    }
    return maxWater;
}
int main(){
    vector<int> height = {1,1};
    int ans = maxArea(height);
    cout<<"max water is :"<<ans;
}