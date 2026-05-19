#include<iostream>
using namespace std;
int cnt =0;
void countZeros(int n){

    //base case
    if(n==0)
    return;

    int dig = n%10;
    if(dig==0){
        cnt++;
    }
    countZeros(n/10);
}
int main(){
    int n = 80058;
countZeros(n);
cout<<"count is :"<<cnt;
}



// int countNumberOfZeros(int n){
//   int cnt =0;
//   for(int i=0; i<=n; i++){
//     if(n%10==0){
//         cnt++;
//     }
//     n = n/10;
//   }
//   return cnt;
// }

// int main(){
//     int n = 840057;
//     cout<<countNumberOfZeros(n);
// }