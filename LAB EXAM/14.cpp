#include<iostream>
using namespace std;

class Height{
    int feet,inches;
    public:
        void read(){
            cout<<"Enter the height in feet and inches(0-12): ";
            cin>>feet>>inches;
        }
        void display(){
            cout<<feet<<" feet "<<inches<<" inches";
        }
        bool operator>(Height h){
            if(feet>h.feet){
                return true;
            }
            else if(feet==h.feet){
                if(inches>h.inches){
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
};

int main(){
    Height h1,h2;
    h1.read();
    h2.read();
    if(h1>h2){
        h1.display();
        cout<<" is greater than ";
        h2.display();
    }
    else{
        h1.display();
        cout<<" is lesser than ";
        h2.display();
    }
}