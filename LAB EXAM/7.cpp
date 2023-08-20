#include<iostream>
using namespace std;

class Textbook{
    string title,subject;
    int price,pages;
    char Class[2];
    public:
        void read(){
            cout<<"Enter title, subject,class, price and pages : ";
            cin>>title>>subject>>Class>>price>>pages;
        }
        void display(){
            cout<<"Title: "<<title<<endl;
            cout<<"Subject: "<<subject<<endl;
            cout<<"Class: "<<Class<<endl;
            cout<<"Price: "<<price<<endl;
            cout<<"Pages: "<<pages<<endl;
        }
};

int main(){
    Textbook t,*ptr;
    ptr = &t;
    ptr->read();
    ptr->display();
    return 0;
}