// WAP to create a class rectangle and find the area of 3 different size of rectangle//
#include<iostream>
using namespace std;
class rectangle
{
    int length;
    int breadth;
    public:
    void getdata()
    {
        cout<<"enter length and breadth:"<<endl;
        cin>>length>>breadth;
    }
    void calarea()
    {
        int a;
        a=length*breadth;
        cout<<"area:"<<a<<endl;
    }
};
int main()
{
    rectangle r1,r2,r3;
    r1.getdata();
    r2.getdata();
    r3.getdata();
    r1.calarea();
    r2.calarea();
    r3.calarea();
    return(0);
}

