#include <iostream>
using namespace std;

// implemented class
class customer
{
public:
    // data members or attributes
    string name;
    int age;
    char gender;
    double credits;

    // constructor member function - 1
    //  functionlity
    //  1. it has the same name as the class name
    //  2. it doesn't have a return type
    //  3. it's invoked automatically upon declaration of an
    //  object to construct it.

    // customer()
    // {
    //     cout << "i have create constructoer";
    // }

    // member functions-2
    // void printDetails()
    // {
    //     cout << name << endl;
    //     cout << age << endl;
    //     cout << gender << endl;
    //     cout << credits << endl;
    // }

    // member function - 3
    //   void increaseAge(){
    //     age++;
    //   }

    // parameterized => parameterized constructor is a class constructor
    // to which we pass arguments corresponding to inital values of data members
    // of the object being constructed.

    customer(string n, int a, char g, double c)
    { // parameterized constructor
        name = n;
        age = a;
        gender = g;
        credits = c;
    }
};

int main()
{ // i have created an object with the name c1
    customer c1("vansh", 21, 'M', 5000);
    cout << c1.name;
    // accessing attribute
    // c1.name = "vansh";
    // c1.age = 21;
    // c1.gender = 'M';
    // c1.credits = 555;

    // cout<<c1.name<<endl;
    // cout<<c1.age<<endl;
    // cout<<c1.gender<<endl;
    // cout<<c1.credits<<endl;

    // cout<<"before data>>>>>>>>>>"<<endl;
    // c1.printDetails();
    // c1.increaseAge();
    // cout<<"after data>>>>>>>>>>>"<<endl;
    // c1.printDetails();
}