#include<iostream>
using namespace std;

class Student{
    protected:
        int roll;
        string name;
    public:
        void getStudent(int r,string n){
            roll = r;
            name = n;
        }
};

class Marks:public Student{
    protected:
        int m1,m2,m3;
    public:
        void getMarks(){
            cout<<"Enter marks of 3 subjects :"<<endl;
            cin>>m1>>m2>>m3;
        }
};

class Result:public Marks{
    protected:
        int total;
        char grade;
    public:
        Result(int r,string n){
            getStudent(r,n);
            getMarks();
            total = m1+m2+m3;
            if(total>240)
                grade = 'A';
            else if(total>160)
                grade = 'B';
            else if(total>80)
                grade = 'C';
            else
                grade = 'F';
        }
        void showResult(){
            cout<<"Name :"<<name<<endl;
            cout<<"Roll :"<<roll<<endl;
            cout<<"Marks : "<<endl<<"Phy :"<<m1<<", Chem: "<<m2<<", Maths: "<<m3<<endl;
            cout<<"Total Marks :"<<total<<endl;
            cout<<"Grade :"<<grade<<endl;
        }
};

int main(){
    Result r1(10,"Messi");
    r1.showResult();
    return 0;
}