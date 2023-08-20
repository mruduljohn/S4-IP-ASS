#include<iostream>
using namespace std;

class Date{
    private:
        int day,month,year;
    public:
        Date(int d,int m,int y){
            day = d;
            month = m;
            year = y;
        }
        void display(){
            cout<<"Current Date is :"<<day<<"/"<<month<<"/"<<year<<endl;
        }
        Date operator-(){
            if((day==1) && (month==1)){
                day = 30;
                month = 12;
                year--;
            }
            else if(day==1){
                day=30;
                month--;
            }
            else{
                day--;
            }
        }
};

int main(){
    Date d1(1,1,2021);
    d1.display();
    -d1;
    cout<<"After Decrementing :\n";
    d1.display();
    return 0;
}