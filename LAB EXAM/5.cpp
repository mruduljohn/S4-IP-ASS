#include<iostream>
using namespace std;

class Billing{
    public:
        int pid,billno,billamt;
        string name,dept;
        void getGInfo(){
            cout<<"Enter Patient ID: ";
            cin>>pid;
            cout<<"Enter Patient Name: ";
            cin>>name;
            cout<<"Enter Department: ";
            cin>>dept;
            cout<<"Enter Bill Number: ";
            cin>>billno;
        }
        virtual void calcBill() = 0;
};

class OutPatient:public Billing{
    int const regfee = 100;
    int const docfee = 200;
    int medfee = 0;
    public:
        void getOPInfo(){
            getGInfo();
            cout<<"Enter Medicine Fee if any: ";
            cin>>medfee;
        }
        void calcBill(){
            int billamt = regfee + docfee + medfee;
            cout<<"Name: "<<name<<endl;
            cout<<"Patient Id: "<<pid<<endl;
            cout<<"Department: "<<dept<<endl;
            cout<<"Bill Number: "<<billno<<endl;
            cout<<"Type of Admission: Out Patient"<<endl;
            cout<<"Bill Amount: "<<billamt<<endl;
        }
};

class InPatient:public Billing{
    int const roomchrg = 400;
    int const cantnfee = 200;
    int const pharmfee = 100;
    int days;
    public:
        void getIPInfo(){
            getGInfo();
            cout<<"Enter No. of days: ";
            cin>>days;
        }
        void calcBill(){
            int billamt = roomchrg*days + cantnfee + pharmfee;
            cout<<"Name: "<<name<<endl;
            cout<<"Patient Id: "<<pid<<endl;
            cout<<"Department: "<<dept<<endl;
            cout<<"Bill Number: "<<billno<<endl;
            cout<<"Type of Admission: In Patient"<<endl;
            cout<<"Bill Amount: "<<billamt<<endl;
        }
};

int main(){
    Billing *ptr;
    OutPatient op;
    InPatient ip;
    ptr = &op;
    op.getOPInfo();
    ptr->calcBill();
    ptr = &ip;
    ip.getIPInfo();
    ptr->calcBill();
    return 0;
}