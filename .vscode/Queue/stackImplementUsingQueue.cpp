#include<iostream>
#include<queue>
using namespace std;

class  MyStack{
    public :
queue<int> q1,q2;
void push(int x){
    while(!q1.empty()){
int element = q1.front();
q2.push(element);
q1.pop();
    }
    q1.push(x);

    while(!q2.empty()){
        int element = q2.front();
        q1.push(element);
        q2.pop();
    }
}

int pop() {
int element = q1.front();
q1.pop();
return element;
}

int top () {
return q1.front();
}

 bool empty() {
if(!q1.empty()) {
    return false;
}
return true;
}
};
int main() {
MyStack st;
st.push(1);
st.push(2);
st.push(3);

    cout << "Top: " << st.top() << endl;

    cout << "Popped: " << st.pop() << endl;

    cout << "Top after pop: " << st.top() << endl;

    cout << "Is Empty: " << st.empty() << endl;
}
