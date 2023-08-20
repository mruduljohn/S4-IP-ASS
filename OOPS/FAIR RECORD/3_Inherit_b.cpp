#include<iostream>
using namespace std;

class Area{
    public:
        void getArea(int l,int b){
            cout<<"Area of rectangle :"<<l*b<<endl;
        }
};

class Perimeter{
    public:
        void getPerimeter(int l,int b){
            cout<<"Perimeter of rectangle :"<<2*(l+b)<<endl;
        }
};

class Rectangle:public Area,public Perimeter{
    int l,b;
    public:
        Rectangle(int x,int y){
            l=x; b=y;
        }
        void getDetails(){
            cout<<"Length :"<<l<<endl;
            cout<<"Breadth :"<<b<<endl;
            getArea(l,b);
            getPerimeter(l,b);
        }
};

int main(){
    Rectangle r1(10,20);
    r1.getDetails();
    return 0;
}