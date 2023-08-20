#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int X,Y;
    public:
        friend double getDistance(Point a,Point b);
        void read(){
            cout<<"Enter X and Y: ";
            cin>>X>>Y;
        }
};

double getDistance(Point a,Point b){
    double d;
    d = sqrt(pow((a.X-b.X),2)-pow((a.Y-b.Y),2));
    return d;
}

int main(){
    Point a,b;
    a.read();
    b.read();
    cout<<"Distance: "<<getDistance(a,b)<<endl;
}