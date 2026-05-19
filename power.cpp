#include<iostream>
using namespace std;
int powerOf(int a, int b){
    if(b==0) return 1;

    return a*powerOf(a,b-1);
}
int main() {
    int n;
    cout<<"power is :"<<powerOf(2,10);
}