#include <iostream>
#include <string>
using namespace std;
class bankaccount
{
   string name;
   string type;
   double acc_no;
   double balance;
   public:
   bankaccount(string name,string type,double acc_no,double balance)
   {
    this->name= name;
    this->type = type;
    this->acc_no = acc_no;
    this->balance = balance;
   }
   
   void deposit(double a)
   {
      if(a<0)
      {
        cout<<"not possible"<<endl;
      }
      else 
      {
        balance+=a;
        cout<<"amount to be deposited "<<a<<endl;
      }
   }
   void withdraw(double amt)
   {
      if(balance<amt)
      {
        cout<<"insufficient balance"<<endl; 
      }
      else
      {
        balance-=amt;
        cout<<"amount to be withdrawn "<<amt<<endl;
      }

   }
   void display()
   {
    cout<<"Name of the account holder is "<<name<<endl;
    cout<<"type of account is "<<type<<endl;
    cout<<"account  umber is "<<acc_no<<endl;
    cout<<"balance in the account is "<<balance<<endl;
   }
   void acc_balance()
   {
    cout<<"balance in the account is "<<balance<<endl;
   }
};
int main()
{
    bankaccount p1("devansh","savings",135627,230000);
    p1.display();
    p1.deposit(30000);
    p1.acc_balance();
    p1.withdraw(250000);
    p1.acc_balance();
}