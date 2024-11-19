// Experiment 13:
// Create class name is Integer in this class implement the operator over loading using friend function Binary(+) operator.
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Integer
{
private:
    int value;
public:
    Integer(int v=0): value(v){}

    friend Integer operator+(Integer &x,Integer &y)
    {
        return Integer(x.value + y.value);
    }

    void get(int v)
    {
        value = v;
    }

    int getValue()
    {
        return value;
    }
};

int main()
{
    Integer num1, num2;

    int input1, input2;
    cout << "Enter the first integer: ";
    cin >> input1;
    num1.get(input1);

    cout << "Enter the second integer: ";
    cin >> input2;
    num2.get(input2);

    Integer result = num1 + num2;
    cout << "The result of num1 + num2 is: " << result.getValue() << endl;

    return 0;
}