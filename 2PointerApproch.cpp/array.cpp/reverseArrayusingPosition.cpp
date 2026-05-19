#include<iostream>
#include<vector>
using namespace std;
vector<int> reverseArray(vector<int> &arr, int position){
    int s = position+1, e=arr.size()-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return arr;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int position = {4};

   vector<int> ans = reverseArray(arr,position);
   cout<<"reverse array is given position after >>>>> ";
   for(auto it : ans){
    cout<<it<<" ";
   }
}