#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

bool check(vector<int>& bloomDay, int m, int k, int mid){

    int flowers = 0, bouquets = 0;

    for(int i=0;i<bloomDay.size();i++){

        if(bloomDay[i] <= mid){

            flowers++;

            if(flowers == k){
                bouquets++;
                flowers = 0;
            }
        }
        else{
            flowers = 0;
        }
    }

    return bouquets >= m;
}

int findMin(vector<int>& bloomDay){

    int mini = INT_MAX;

    for(int i=0;i<bloomDay.size();i++){
        mini = min(mini,bloomDay[i]);
    }

    return mini;
}

int findMax(vector<int>& bloomDay){

    int maxi = 0;

    for(int i=0;i<bloomDay.size();i++){
        maxi = max(maxi,bloomDay[i]);
    }

    return maxi;
}

int minDays(vector<int>& bloomDay, int m, int k){

    if((long long)m*k > bloomDay.size()){
        return -1;
    }

    int start = findMin(bloomDay);
    int end = findMax(bloomDay);

    int ans = -1;

    while(start <= end){

        int mid = start + (end-start)/2;

        if(check(bloomDay,m,k,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

    return ans;
}

int main(){

    vector<int> bloomDay = {1,10,3,10,2};

    int m = 3;
    int k = 1;

    cout<<"Minimum days: "
        <<minDays(bloomDay,m,k);

    return 0;
}