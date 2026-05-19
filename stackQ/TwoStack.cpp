#include<iostream>
#include<stack>
using namespace std;

class TwoStack{
    int *arr;
    int top1;
    int top2;
    int size;

    public:
    //create constructor
    TwoStack(int s){
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    //creation a pus1 operation
    void push1(int num){
     if(top2-top1>1){ //atleast one empty space present
      top1++;
      arr[top1] = num;
     }
    }
    //push in 2 stack
    void push2(int num){
         if(top2-top1>1){ //atleast one empty space present
      top2--;
      arr[top2] = num;
     }
    }
    //pop1 in 2 stack
    int pop1(){
        if(top1>=0){
           int ans = arr[top1];
           top1--; 
           return ans;
        }
        else {
            return -1;
        }
    }
 //pop1 in 2 stack
    int pop2(){
        if(top2<size){
           int ans = arr[top2];
           top2++; 
           return ans;
        }
        else {
            return -1;
        }
    }
};

int main(){
    TwoStack ts(5);

    ts.push1(10);
    ts.push1(20);
    ts.push2(30);
    ts.push2(40);

    cout <<"pop1 element is :"<< ts.pop1() << endl; // 20
    cout <<"pop2 element is :"<<ts.pop2() << endl; // 40


}