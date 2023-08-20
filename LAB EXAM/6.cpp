#include<iostream>
using namespace std;

class float_numbers{
    protected:
        float num3,num4;
        void Getfloat(){
            cout<<"Enter two float numbers: ";
            cin>>num3>>num4;
        }
};

class multiplication:virtual public float_numbers{
    protected:
        float product;
        void multiply(){
            product = num3*num4;
        }
};

class division:virtual public float_numbers{
    protected:
        float quotient;
        void div(){
            quotient = num3/num4;
        }
};

class arithemetic:public multiplication,public division{
    public:
        void display(){
            Getfloat();
            multiply();
            div();
            cout<<"Product: "<<product<<endl;
            cout<<"Quotient: "<<quotient<<endl;
        }
};

int main(){
    arithemetic a;
    a.display();
    return 0;
}