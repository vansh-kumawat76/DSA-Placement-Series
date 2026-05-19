#include<iostream>
using namespace std;

bool isPalindrome(string n){
    int i=0, j = n.size()-1;

    while(i<j){
        if(n[i]!=n[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    string n = "moom";
    if(isPalindrome(n)){
        cout<<"is a palindrome";
    }
    else {
        cout<<"not a palindrome";
    }
}