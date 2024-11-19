#include <iostream>
#include <string>
using namespace std;
class incometax{
    string name;
    double income;
    double taxdue;
    public:
    incometax(string name,double income)
    {
        this->name= name;
        this->income = income;
    }
    void computetax()
    {
        if(income<=100000)
        {
            cout<<"tax payable is nill"<<endl;
        }
        else if(income >100000 && income <= 150000)
        {
            taxdue = (income - 100000)*0.10;
        }
         else if(income >150000 && income <= 200000)
        {
            taxdue = (income - 150000)*0.20;
        }
        else{
            taxdue = (income-200000)*0.30;
        }
    }
    void output()
    {
         cout<<"Name of the individual is "<<name<<endl<<" The tax that is to be paid is "<<taxdue<<endl;
    }
};
int main()
{
    incometax person1("Devansh",290000);
    person1.computetax();
    person1.output();
    incometax person2("parth",690000);
    person2.computetax();
    person2.output();
}