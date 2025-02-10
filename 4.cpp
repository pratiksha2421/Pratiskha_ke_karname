// WAP to create a class circle and find the area of circle//
#include<iostream>
using namespace std;
class circle
{
    float radius;
    public:
    void getdata()
    {
        cout<<"enter the radius:"<<endl;
        cin>>radius;
    }
    void calarea()
    {
        int a;
        a=3.14*radius*radius;
        cout<<"Area of circle:"<<a;
    }
};
int main()
{
    circle c;
    c.getdata();
    c.calarea();
    return(0);
}