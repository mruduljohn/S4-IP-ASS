#include<iostream> 
using namespace std; 
 
class Time{ 
   
  private: 
  int hours,minutes; 
 
  public: 
    void getData(); 
    void display(){ 
      cout<<"The new time is "<<hours<<" hrs  "<<minutes<<" mins"<<endl; 
    } 
    Time addTime(int mins); 
    Time addTime(int hrs,int mins); 
 
};  
 
void Time :: getData(){ 
  cout<<"Enter Hour and time respectively : "<<endl; 
  cin>>hours>>minutes; 
} 
 
Time Time :: addTime(int mins){ 
   
  Time t1; 
  t1.minutes = minutes + mins;
  cout<<t1.minutes<<endl;
  t1.hours = hours + (t1.minutes/60);
  cout<<t1.hours<<endl;  
  t1.minutes %= 60;  
 
  return t1; 
} 
 
Time Time :: addTime(int hrs,int mins){ 
   
  Time t1; 
  t1.hours = hours + hrs; 
  t1.minutes = minutes + mins; 
  t1.hours += (t1.minutes/60) ; 
  t1.minutes %= 60;
  return t1; 
} 
 
int main(){ 
    Time t1,t2,t3; 
    t1.getData(); 
    t3 = t1.addTime(10); 
    t3.display(); 
    t2 = t1.addTime(5,80); 
    t2.display(); 
    return 0; 
}