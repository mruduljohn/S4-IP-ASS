#include<iostream>
using namespace std;

class weight{
    int kg,g;
    public:
        void read(){
            cout<<"Enter kg and g: ";
            cin>>kg>>g;
        }
        void display(){
            cout<<"Weight: "<<(kg*1000)+g<<"g"<<endl;
        }
        friend void operator+(weight &w1,int x);
};

void operator+(weight &w1,int x){
    w1.g += x;
}

int main(){
    weight w1;
    int g1;
    w1.read();
    w1.display();
    cout<<"Enter the grams to add: "<<endl;
    cin>>g1;
    w1+g1;
    w1.display();
    return 0;
}