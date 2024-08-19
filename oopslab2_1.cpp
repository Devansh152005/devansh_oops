#include<iostream>
using namespace std;
class storeorder{
      private:
      const double minercost=1500;
      const double toastercost=200;
      const double fancost=450;

      const double minerDiscount=5.0;
      const double toasterDiscount=10.0;
      const double fanDiscount=15.0;

      const double salestax=10.0;

      public:
      double calcdiscountedprice(double cost,double discount)
      {
        return cost - (cost*discount/100);
      }
      double calcfinalprice(double costafterdiscount)
      {
        return costafterdiscount + ( costafterdisount *salestax/100);
      }
       double calctotalamount(int miners,int toasters,int fans)
       {
        double minerprice=calcdiscountedprice(minercost,minerdiscount);
        double toasterprice=calcdiscountedprice(toastercost,toasterdiscount);
        double fanprice=calcdiscountedprice(fancost,fandiscount);

        double total=(minerprice*miners) + (toasterprice*toasters) + (danprice*fans);
        return calcfinalprice(total);

       }
};
int main()
{ storeorder s1;
int m,n,p;
s1.calctotalamount(m=5, n=6, p=2);
cout<<"enter number of miners,toasters,and fans"<<endl;
cin>>&m>>&n>>&p>>endl;
s1.calctotalamount( m, n, p);

}