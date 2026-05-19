#include<iostream>
using namespace std;

int reverseInteger(int n){
    int sum = 0;
    while(n){
        sum = sum*10+(n%10);
        n = n/10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"revese integer is : "<<reverseInteger(123);
}