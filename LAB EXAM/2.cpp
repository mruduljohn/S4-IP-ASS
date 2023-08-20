#include<iostream>
#include<cmath>
using namespace std;

class Quadratic{
    int A,B,C;
    public:
        void getCoefficients(){
            cout<<"Enter A,B,C: ";
            cin>>A>>B>>C;
        }
        void display(){
            cout<<"The Equation is "<<A<<"x^2 + "<<B<<"x + "<<C<<endl;
            getRoots(*this);
        }
        friend void getRoots(Quadratic q);
};

void getRoots(Quadratic q){
    double D = pow(q.B,2)-4*q.A*q.C;
    if(D<0){
        cout<<"Roots are imaginary"<<endl;
    }
    else{
        double r1 = (-q.B+sqrt(D))/2*q.A;
        double r2 = (-q.B-sqrt(D))/2*q.A;
        cout<<"Roots are "<<r1<<" and "<<r2<<endl;
    }
}

int main(){
    Quadratic q;
    q.getCoefficients();
    q.display();
}