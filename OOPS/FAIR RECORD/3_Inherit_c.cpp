#include<iostream>
using namespace std;

class Employee{
    protected:
        int id;
        string name;
        int hrs;
    public:
        void getEmployee(){
            cout<<"Enter id :"<<endl;
            cin>>id;
            cout<<"Enter name :"<<endl;
            cin>>name;
            cout<<"Enter working hours :"<<endl;
            cin>>hrs;
        }
};

class Faculty:public Employee{
    protected:
        int salary;
        string dept;
    public:
        Faculty(string d){
            dept = d;
        }
        void getSalary(){
            salary = hrs*1000;
        }
        void details(){
            cout<<"Name :"<<name<<endl;
            cout<<"Id :"<<id<<endl;
            cout<<"Department :"<<dept<<endl;
            cout<<"Salary :"<<salary<<endl;
        }
};

class Staff:public Employee{
    protected:
        int salary;
        char section;
    public:
        Staff(char s){
            section = s;
        }
        void getSalary(){
            salary = hrs*500;
        }
        void details(){
            cout<<"Name :"<<name<<endl;
            cout<<"Id :"<<id<<endl;
            cout<<"Office Section :"<<section<<endl;
            cout<<"Salary :"<<salary<<endl;
        }
};

int main(){
    Faculty f1("CSE");
    f1.getEmployee();
    f1.getSalary();
    f1.details();
    Staff s1('A');
    s1.getEmployee();
    s1.getSalary();
    s1.details();
    return 0;
}