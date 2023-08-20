#include<iostream>
using namespace std;

class Student{
    protected:
        int roll,type;
        string name,branch;
    public:
        void Sread(){
            cout<<"Enter name, roll no and branch: ";
            cin>>name>>roll>>branch;
        }
        void Sdisplay(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll: "<<roll<<endl;
            cout<<"Branch: "<<branch<<endl;
        }

};

class UGStudent:virtual public Student{
    int sem;
    int m1,m2,m3,m4,m5;
    public:
        void getUG(){
            Sread();
            type = 1;
            cout<<"Enter sem(1-8): ";
            cin>>sem;
            cout<<"Enter marks of 5 subjects(each out of 60): ";
            cin>>m1>>m2>>m3>>m4>>m5;
        }
        void displayUG(){
            Sdisplay();
            cout<<"Type: UG"<<endl;
            cout<<"Sem: "<<sem<<endl;
            cout<<"Marks: "<<m1<<" "<<m2<<" "<<m3<<" "<<m4<<" "<<m5<<endl;
            cout<<"Total Marks : "<<m1+m2+m3+m4+m5<<"/360"<<endl;
        }
};

class PGStudent:virtual public Student{
    string specialization;
    string year;  //Question said 'string'...otherwise its int
    int m1,m2,m3,m4;
    public:
        void getPG(){
            Sread();
            type = 0;
            cout<<"Enter specialization and year(1-2): ";
            cin>>specialization>>year;
            cout<<"Enter marks of 4 subjects(each of out 60): ";
            cin>>m1>>m2>>m3>>m4;
        }
        void displayPG(){
            Sdisplay();
            cout<<"Type: PG"<<endl; 
            cout<<"Specialization: "<<specialization<<endl;
            cout<<"Year: "<<year<<endl;
            cout<<"Marks: "<<m1<<" "<<m2<<" "<<m3<<" "<<m4<<endl;
            cout<<"Total Marks : "<<m1+m2+m3+m4<<"/240"<<endl;
        }
};

class college_Result:public UGStudent,public PGStudent{
    public:
        college_Result(int x){
            if(x==1){
                getUG();
                displayUG();
            }
            else if(x==0){
                getPG();
                displayPG();
            }
            else{
                cout<<"Invalid input...!"<<endl;
            }
        }
};

int main(){
    college_Result c1(0),c2(1);
    return 0;
}