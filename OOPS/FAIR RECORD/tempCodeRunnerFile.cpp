#include<iostream>
using namespace std;

class Rational{
    int p,q;
    public:
        void getRational(){
            cout<<"Enter numerator :"<<endl;
            cin>>p;
            cout<<"Enter denominator :"<<endl;
            cin>>q;
        }
        void showRational(){
            cout<<p<<"/"<<q<<endl;
        }
};

int main(){
    Rational r1;
    Rational *ptr;
    ptr = &r1;
    ptr->getRational();
    ptr->showRational();
    return 0;
}