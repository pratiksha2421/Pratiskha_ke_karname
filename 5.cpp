// Static Data Member//
#include<iostream>
using namespace std;
class demo
{
    int a;
    int b;
    static int c;
    public:
    void getdata()
    {
        cout<<"enter the value of a&b";
        cin>>a>>b;
    }
    void incr()
    {
        a++;
        b++;
        c++;
    }
    void display()
    {
        cout<<a<<b<<c;
    }
    };
    int demo::c=5;
    int main()
    {
demo d1,d2;
d1.getdata();
d2.getdata();
d1.incr();
d2.display();
d1.display();
demo d3;
d3.getdata();
d3.incr();
d1.display();
d2.display();
d3.display();
return(0);
    }

    