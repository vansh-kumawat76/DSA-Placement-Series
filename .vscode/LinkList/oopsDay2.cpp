#include <iostream>
using namespace std;
// pointer variable => it stores the address of another variable
class car
{
private:
    int model;
    string brandName;
    string modelName;
    string color;

public:
    // parameterized Constructor
    car(int m, string bn, string mn, string c)
    {
        model = m;
        brandName = bn;
        modelName = mn;
        color = c;
    }

    // Getter function
    string getColor()
    {
        return color;
    }
};

int main()
{
    car *c1 = new car(2026, "Toyota", "Fortuner", "white");

    cout << c1->getColor();

    delete c1; // free memory
    return 0;
}