#include <iostream>
#include <iomanip>

using namespace std;
class student{
      private:
      int admno;
      char name;
      int markseng,marksmaths,markssci,total;
      void compute()
      {
        total= (markseng)+(marksmaths)+(markssci);
      }
      public:
      void readData()
      {
        cout<<"enter name of the student"<<endl;
        cin>>name;
        cout<<"enter admisiion number"<<endl;
        cin>>admno;
        cout<<"enter marks in english,maths and science"<<endl;
        cin>>markseng>>marksmaths>>markssci;
        compute();
      }
      void display()
      {
        cout<<"name is"<<name<<endl;
        cout<<"admision number is"<<admno<<endl;
        cout<<"total marks are"<<total<<endl;
      }
};
int main()
{
    student s1;
    s1.readData();
    s1.display();
}