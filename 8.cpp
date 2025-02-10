// WAP to enter the record of 5 students and and calculate the result of students and display it//
#include<iostream>
using namespace std;
class student
{
string name;
int rollno;
int marks[5];
float percentage;
public:
void getdata();
void calresult();
void showresult();
};
void student:: getdata()
{
    cout<<"enter the name:"<<endl;
    cin>>name;
    cout<<"enter the rollno:"<<endl;
    cin>>rollno;
    cout<<"enter the marks of 5 subjects:"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>marks[5];
    }
};
void student::calresult()
{
    percentage=0;
    for(int i=0; i<5; i++)
    {
        percentage= percentage+ marks[i];
    }
    percentage=percentage/5;
}
void student::showresult()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Rollno:"<<rollno<<endl;
    cout<<"Marks"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<marks[i]<<endl;
    }
    cout<<"Percentage:"<<percentage<<endl;
    if(percentage<=60)
    {
        cout<<"first division";
    }
    else if(percentage<=50)
    {
        cout<<"second division";
    }
    else if(percentage<=40)
    {
        cout<<"third division";
    }
    else{
        cout<<"fail";
    }
}
int main()
{
 student s[5];
for(int i=0; i<5; i++)
{
    s[i].getdata();
    s[i].calresult();
}
for(int i=0; i<5; i++)
{
    s[i].showresult();
}
return(0);
}




