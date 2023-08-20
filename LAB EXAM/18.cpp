#include<iostream>
using namespace std;

class Employee{
    int id;
    string name;
    float basic,DA,TA;
    float netSalary;
    public:
        void read(){
            cout<<"Enter the id of the employee : ";
            cin>>id;
            cout<<"Enter the name of the employee : ";
            cin>>name;
            cout<<"Enter the basic salary : ";
            cin>>basic;
            DA = 0.52*basic;
            TA = 0.3*(basic+DA);   //I don't know the exact formula..!
            netSalary = basic+TA+DA;
        }
        void display(){
            cout<<"Emp Id : "<<id<<endl;
            cout<<"Emp Name : "<<name<<endl;
            cout<<"Basic Salary : "<<basic<<endl;
            cout<<"DA : "<<DA<<endl;
            cout<<"TA : "<<TA<<endl;
            cout<<"Net Salary : "<<netSalary<<endl;
        }
};

int main(){
    int N;
    cout<<"Enter the number of employees : ";
    cin>>N;
    Employee e[N];
    for(int i=0;i<N;i++){
        e[i].read();
        e[i].display();
    }
    return 0;
}