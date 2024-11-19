#include <iostream>
#include <string>
using namespace std;
class telephone{
    string name;
    double calls;
    double bill;
    public:
    void inputdata()
    {
        cout<<"enter name of customer"<<endl;
        cin>>this->name;
        cout<<"enter no of calls by customer"<<endl;
        cin>>this->calls;
    }
    void computebill()
{
     if(calls<=100)
     {
        bill=200;
     }
     if(calls>100&& calls<=150)
     {
        bill = 200 + (calls - 100)*0.60;
     }
     if (calls>150 && calls<=200)
     {
        bill = 200 + 50*0.60 + (calls-150)*0.50;
     }
     if (calls>200)
     {
        bill = 255 + (calls - 200)*0.40;
     }
}
void output()
{
    cout<<"name of the customer is "<<name<<" and the bill that is to be paid is "<<bill<<endl;
}
    
};
int main()
{
   telephone t[10];
   t[0].inputdata();
   t[0].computebill();
   t[0].output();
   t[1].inputdata();
   t[1].computebill();
   t[1].output();

}