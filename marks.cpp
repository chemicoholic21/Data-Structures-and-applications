#include<iostream>
#include<iomanip>
using namespace std;
class STUDENT
{
    int s[20];
    int roll_no;
    char name[20];
    int t1,t2,t3;
    float avg;
    public: static int count;
    void read();
    void compute();
    void display();
};
int STUDENT::count;
void STUDENT::read()
{
    cout<<"Enter student name:";
    cin>>name;
    cout<<"Enter student's 3 test marks";
    cin>>t1>>t2>>t3;
    count=count+1;
    roll_no=count;
}
void STUDENT::compute()
{
    if(t1<t2 && t1<t3)
    avg=(t2+t3)/2;
    else if(t2<t1 && t2<t3)
    avg=(t1+t3)/2;
    else
    avg=(t1+t2)/2;
}
void STUDENT::display()
{
    cout<<roll_no<<setw(4)<<name<<setw(3)<<t1<<setw(3)<<t2<<<setw(3)<<t3<<setw(3)<<avg<<endl;
}
int main()
{
    STUDENT s[10];
    
}