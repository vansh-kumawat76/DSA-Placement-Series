#include<iostream>
#include<stack>
using namespace std;

bool validParnthess(string s){
    int n = s.size();

    //create a stack
    stack<char> st;
    for(int i=0; i<n; i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else {
            if(st.empty()){
                return false;
            }
            else {
                char top = st.top();
                if((s[i]==')' && top != '(') || (s[i]=='}' && top != '{') ||
            (s[i]==']' && top != '[')) {
                return false;
            }
            st.pop();
            }
        }
    }
    return st.empty();
}

int main(){
    string s = "(";
    cout<<"valid paranthess is :"<<validParnthess(s);
}