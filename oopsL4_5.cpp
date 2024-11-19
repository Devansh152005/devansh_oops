#include <iostream>
#include <string>
using namespace std;
class publication{
    protected:
     string title;
     double price;
     string author;
    public:
     void getdata()
     {
        cout<<"enter title:";
        getline(cin,title);
        cout<<"enter price of book:";
        cin>>price;
        cin.ignore();
        cout<<"enter the name of author:";
        getline(cin,author);
     }
     void display()
     {
        cout<<"title :"<<title<<endl;
        cout<<"price: rs"<<price<<endl;
        cout<<"author name is "<<author<<endl;
     }
    
};
class book:public publication{
     int pcount;
     public:
     void getdata()
     {
        publication::getdata();
        cout<<"enter the number of pages count:";
        cin>>pcount;
        cin.ignore();
     }
     void display()
     {
        publication::display();
        cout<<"no of pages count is "<<pcount<<endl;
     }
};
class ebook:public publication{
     double ptime;
     public:
      void getdata()
     {
        publication::getdata();
        cout<<"enter the amount of time:";
        cin>>ptime;
        cin.ignore();
     }
     void display()
     {
        publication::display();
        cout<<"amount of time is "<<ptime<<endl;
     }
};
int main()
{
    book mybook;
    ebook myebook;

    cout<<"enter data of book:"<<endl;
    mybook.getdata();
    cout<<"display data of book:"<<endl;
    mybook.display();

    cout<<"enter data of ebook:"<<endl;
    myebook.getdata();
    cout<<"display data of ebook:"<<endl;
    myebook.display();
    return 0;
}