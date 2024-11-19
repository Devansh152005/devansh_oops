// Experiment 11: 
//create class name is integer in this class implement the overloading >> and << operator using friend function
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
class Integer{
private:
  int value;
public:
  Integer(int v=0): value(v){}

  friend ostream& operator<<(ostream& out,Integer& x)
  {
     out << x.value;
     return out;
  }
 friend istream& operator>>(istream& in,Integer& y)
 {
    in >> y.value;
    return in;
 }
};
int main()
{
Integer num1;
cout<<"enter an integer:";
cin >> num1;
cout<<"the value of num1 is :"<< num1 <<endl;
return 0;

}