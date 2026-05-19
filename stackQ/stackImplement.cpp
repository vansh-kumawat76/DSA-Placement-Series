#include <iostream>
#include <stack>
using namespace std;

class Stack
{ // using arr
    // properties
    int top;
    int *arr;
    int size;

    public:
    // behavior
    //   create a constructor
    Stack(int size)
    {
        this->size = size;   // size intialization
        arr = new int[size]; // mermory allocation
        top = -1;
    }
    // push operation
    void push(int element)
    {
        if (size - top > 1)
        { // space is aviable
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack is overflow" << endl;
        }
    }
    // pop operation
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack is underflow" << endl;
        }
    }
    // top/peek operation
    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "stack is empty";
            return -1;
        }
}
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};


int main()
{
    Stack st(5);

    st.push(30);
    st.push(40);
    st.push(90);
    st.push(97);
    st.push(100);
    st.push(34);
    cout << "top element is :" << st.peek() << endl;

    st.pop();
     cout<<"after popping"<<endl;
    cout<<"top element is :"<<st.peek()<<endl;
     st.pop();
    cout<<"after popping"<<endl;
    cout<<"top element is :"<<st.peek()<<endl;

    st.pop();
    cout<<"after popping"<<endl;
    cout<<"top element is :"<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"stack is empty";
    }
    else {
        cout<<"stack is not empty";
    }
}