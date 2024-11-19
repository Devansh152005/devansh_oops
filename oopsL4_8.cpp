#include <iostream>
#include <string>
using namespace std;
class class_1;
class class_2{
    int v1;
    
    public:
    class_2(int v): v1(v){}
    friend void exchange(class_1 &obj1,class_2 &obj2);
    void display()
    {
        cout<<"value of v1 is"<<v1<<endl;
    }
};
class class_1{
    int v2;
    
    public:
    class_1(int x): v2(x) {}
    friend void exchange(class_1 &obj1,class_2 &obj2);
    void display()
    {
        cout<<"value of v2 is"<<v2<<endl;
    }
};
inline void exchange(class_1& obj1,class_2& obj2)
{
    int temp = obj1.v2;
    obj1.v2= obj2.v1;
    obj2.v1=temp;
}

int main()
{
    class_1 obj1(10);
    class_2 obj2(20);
    cout<<"before numbers are exchanged:"<<endl;
    obj1.display();
    obj2.display();

   exchange(obj1,obj2);
    cout<<"after numbers are exchanged:"<<endl;
    obj1.display();
    obj2.display();
   return 0;
}