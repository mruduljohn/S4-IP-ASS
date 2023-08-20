#include<iostream>
using namespace std;

class Time{
    int hours,minutes;
    public:
        void addTime(int min){
            minutes += min;
            hours += minutes/60;
            minutes %= 60;
            hours %= 24;
        }
        void addTime(int hr,int min){
            hours += hr;
            minutes += min;
            hours += minutes/60;
            minutes %= 60;
            hours %= 24;
        }
        void setTime(int hr,int min){
            hours = hr;
            minutes = min;
        }
        void display(){
            cout<<"Time: "<<hours<<" hours "<<minutes<<" minutes"<<endl;
        }
};

int main(){
    Time t1,t2;
    t1.setTime(2,30);
    cout<<"The current time is  :";
    t1.display();
    cout<<"Adding 33 minutes to the current time"<<endl;
    t1.addTime(33);
    cout<<"The current time is  :";
    t1.display();
    cout<<"Adding 4 hours and 45 minutes to the current time"<<endl;
    t1.addTime(4,45);
    cout<<"The current time is  :";
    t1.display();
    return 0;
}