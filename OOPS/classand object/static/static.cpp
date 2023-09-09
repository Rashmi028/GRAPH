#include<iostream>
using namespace std;
class area{
    int number;
    static int count;
    public:
    void getdata(int a)
    {
       number=a;
       count++;
    }
    void getcount(void)
    {
        cout<<"count:"<"\n";
         cout<<count<<"\n";
        
       
    }
};
   int area::count=10;

   int main ()
   { area x,y,z,b;
    x.getcount();
    y.getcount();
    z.getcount();


    x.getdata(100);
    y.getdata(200);
    z.getdata(400);
    b.getdata(799);


    cout<<"After reading the data:"<<"\n";
    x.getcount();
    y.getcount();
    z.getcount();
    b.getcount();
 return 0;
   }
    

