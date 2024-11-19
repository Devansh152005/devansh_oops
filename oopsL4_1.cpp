#include <iostream>
#include <string>
using namespace std;
class employee{
    string name;
    double earning;
    static const double bonus;
    double b;
    public:
    void inputdata()
    {
        cout<<"enter name of employee"<<endl;
        cin>>this->name;
        cout<<"enter salary of employee"<<endl;
        cin>>this->earning;
    }
    void computebonus()
    {
        if(earning>=2000)
        {
            int bonus1= (0.1)*earning ;
            cout<<"bonus of the employee is"<<bonus1<<endl;
            b = bonus1;
        }
    }
    void output()
    {
        cout<<"the name of the employee is "<<name<<" and the bonus is"<<(b + earning)<<endl;
    }

};
const double employee::bonus = 0.10;
int main()
{
 employee e[10];
e[0].inputdata();
e[0].computebonus();
e[0].output();
}