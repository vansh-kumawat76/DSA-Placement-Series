#include<iostream>
#include<vector>
using namespace std;

double averageSalary(vector<int> &salary){//pending solution 
int sum = 0; 
int min = INT_MAX;
int max = INT_MIN;

for(int x : salary){
    sum = sum +x;
    min = min(min,x);
    max = max(max,x);
}
return (double)(sum-min-max)/(salary.size()-2);
}

int main(){
vector<int> salary = {1000,2000,3000,4000};
   vector<int> ans =   averageSalary(salary);

   for(auto it : ans){
    cout<<it;
   }
}