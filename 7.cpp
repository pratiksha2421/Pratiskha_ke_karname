// Inline Function//
#include<iostream>
using namespace std;
class demoinline
{
    public:
    void print();
};
void demoinline::print()
{
    for(int i=0; i<=20; i++)
    {
        cout<<"demoinline";
    }
}
int main()
{
    demoinline d;
    d.print();
    return(0);
}