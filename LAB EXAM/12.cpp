#include<iostream>
using namespace std;

class Customer{
    protected:
        int cid,billno;
        double mob,billamt; 
    public:
        Customer(){
            cout<<"Enter the customer id: ";
            cin>>cid;
            cout<<"Enter the mobile number: ";
            cin>>mob;
            cout<<"Enter the bill number: ";
            cin>>billno;
        }
        virtual void getBill() = 0;
};

class Water_bill:public Customer{
    double const minchrg = 50;
    int units;
    public:
        Water_bill(){
            cout<<"Enter the number of units consumed: ";
            cin>>units;
        }
        void getBill(){
            if (units<=100){
                billamt = minchrg + (units*0.6);
            }
            else if(units<=300){
                billamt = minchrg + (100*0.6) + ((units-100)*0.8);
            }
            else{
                billamt = minchrg + (100*0.6) + (200*0.8) + ((units-300)*0.9);
            }
            cout<<"The Water bill amount is: "<<billamt<<endl;
        }
};

class phone_bill:public Customer{
    int totalcalls;
    public:
        phone_bill(){
            cout<<"Enter the total number of calls: ";
            cin>>totalcalls;
        }
        void getBill(){
            double STDcallrate = totalcalls * 0.9;
            double ISDcallrate = totalcalls * 1.25;
            double const UnlmtLocalCall = 240;
            billamt = STDcallrate + ISDcallrate + UnlmtLocalCall;
            cout<<"The Phone bill amount is: "<<billamt<<endl;
        }
};

int main(){
    Water_bill w1;
    w1.getBill();
    phone_bill p1;
    p1.getBill();
    return 0;
}
