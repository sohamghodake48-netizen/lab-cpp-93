#include<iostream>
using namespace std;
class Employee
{
private:
int id;
string designation;
float salary;
float tax;

public:
Employee()
{
    id=0;
    designation="";
    salary=0;
}
void inputdata()
{
    cout<<"Enter id :";
    cin>>id;
    cout<<"Enter designation:";
    cin>>designation;
    cout<<"Enter salary:";
    cin>>salary;
}
void outputdata()
{
    cout<<"\nEmployee details:";
    cout<<"id:"<<id;
    cout<<"designation:"<<designation;
    cout<<"salary:"<<salary;
}
void calculatetax()
{
    cout<<"\nEmployee tax:";
    tax=salary*8.5/100;
    cout<<"Employee tax:"<<salary*8.5/100;
}
};
int main()
{
    Employee s;
    s.inputdata();
    s.outputdata();
    s.calculatetax();
    
    return 0;
}
