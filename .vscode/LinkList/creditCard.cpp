#include<iostream>
using namespace std;

class creditCard{
    public:
    string bankName;
    string cardNumber;
};

class customer {
    public:
    //data members or attributes
    string name;
    int age;
    char gender;
    double credits;
    creditCard card;
};

int main(){
customer c1;
c1.name = "chiku";
c1.age = 22;
c1.gender = 'F';
c1.credits = 6000;
c1.card.bankName = "vancha";
c1.card.cardNumber = "143434565";


}