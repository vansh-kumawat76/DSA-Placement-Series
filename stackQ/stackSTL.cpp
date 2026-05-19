#include<iostream>
#include<stack>
using namespace std;

int main(){
    //creation a stack
    stack<int> st;

    //push operation
    st.push(3);
    st.push(5);

    //pop operation
    st.pop();
     
    cout<<"top element is :"<<st.top()<<endl;

    //empty case
    if(st.empty()){
        cout<<"stack is empty";
    }
    else {
        cout<<"stack is not empty"<<endl;;
    }
    cout<<"size of stack :"<<st.size()<<endl;
}