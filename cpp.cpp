#include<iostream>
using namespace std;
struct person
{
    string name;
	int age;
	float salary;
};
void getdata(string data)
{
    person data1;
    cout<<"ENTER YOUR NAME:";
    cin>>data1.name;
    cout<<"ENTER YOUR AGE:";
    cin>>data1.age;
    cout<<"ENTER YOUR SALARY:";
    cin>>data1.salary;
}
void display_data(person data)
{
    cout<<"NAME:"<<data.name<<"\n";
    cout<<"AGE:"<<data.age<<"\n";
    cout<<"SALARY:"<<data.salary;
}
int main()
{
    person data;
    getdata(data.name);
    display_data(data);
}