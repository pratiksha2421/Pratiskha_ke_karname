// Static Member Function//
#include<iostream>
using namespace std;
class demo
{
    int x;
    int y;
    static int z;
    public:
    void getdata()
    {
        cin>>x>>y;
    }
    void incr()
    {
        x++;
        y++;
        z++;
    }
    static void update()
    {
        z=z+5;
    }
    void display()
    {
        cout<<x<<y<<z;
    }
};
int demo::z=2;
int main()
{
    demo d, d1;
    d.getdata();
    d1.getdata();
    d.incr();
    demo::update();
    d1.display();
    d.display();
return(0);
}