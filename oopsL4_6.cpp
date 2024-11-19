#include <iostream>
#include <string>
using namespace std;
class num2;
class num1{
int a;
public:
num1(): a(10){}
friend void mean(num1 x,num2 y); 
};
class num2
{
   int b;
   public:
 num2(): b(20){}
   friend void mean(num1 x,num2 y); 
};
void mean(num1 x,num2 y)
{
   double c = (x.a + y.b)/2;
   cout<<"mean is "<<c<<endl;
}
int main()
{  
    num1 x;
    num2 y;
    mean(x,y);
}
