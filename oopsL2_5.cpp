#include<iostream>
using namespace std;
class method{
    public:
    double a,b;
    double add(method c)
    {
        return a+b;
    }
    float subtract(method c)
    {
        return a-b;
    }
    float multiply(method c)
    {
        return a*b;
    }


};
int main()
{
    method c1,c2;
    c1.a=4/6;
    c1.b=5/8;
    c2.add(c1);
}