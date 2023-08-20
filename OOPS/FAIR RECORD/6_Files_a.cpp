#include <fstream>
#include <iostream>
using namespace std;

int main(){
    fstream fs;
    fs.open("personal.txt", ios::out);
    string name;
    int age;
    string address;
    cout<<"Enter the name, age and address \n";
    cin>>name>>age>>address;
    fs<<name<<"\n"<<age<<"\n"<<address;
    fs.close();
    
    fs.open("professional.txt", ios::out);
    string job;
    int salary;
    cout<<"Enter the job and salary \n";
    cin>>job>>salary;
    fs<<job<<"\n"<<salary;
    fs.close();

    fs.open("personal.txt", ios::in);
    fs>>name>>age>>address;
    cout<<"Name: "<<name<<"\nAge: "<<age<<"\nAddress: "<<address<<endl;
    fs.close();

    fs.open("professional.txt", ios::in);
    fs>>job>>salary;
    cout<<"Job: "<<job<<"\nSalary: "<<salary<<endl;
    fs.close();
    return 0;
}