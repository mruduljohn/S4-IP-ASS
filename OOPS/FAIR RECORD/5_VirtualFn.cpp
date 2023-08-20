#include<iostream>
using namespace std;

class Polygon{
    public:
        virtual void getArea()=0;
};

class Triangle:public Polygon{
    int b,h;
    public:
        void getTriangle(){
            cout<<"Enter base and height :"<<endl;
            cin>>b>>h;
        }
        void getArea(){
            cout<<"Area of triangle :"<<0.5*b*h<<endl;
        }
};

class Square:public Polygon{
    int s;
    public:
        void getSquare(){
            cout<<"Enter side :"<<endl;
            cin>>s;
        }
        void getArea(){
            cout<<"Area of square :"<<s*s<<endl;
        }
};

int main(){
    Polygon *ptr;
    Triangle t1;
    ptr = &t1;
    t1.getTriangle();
    ptr->getArea();
    Square s1;
    s1.getSquare();
    ptr = &s1;
    ptr->getArea();
    return 0;
}