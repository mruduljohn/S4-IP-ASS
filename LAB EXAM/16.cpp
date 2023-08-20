#include<iostream>
using namespace std;

class Books{
    int id,stock_position;
    string title,author,publisher;
    float price;
    public:
        Books(){
            cout<<"Enter the id of the book : ";
            cin>>id;
            cout<<"Enter the title of the book : ";
            cin>>title;
            cout<<"Enter the author of the book : ";
            cin>>author;
            cout<<"Enter the publisher of the book : ";
            cin>>publisher;
            cout<<"Enter the price of the book : ";
            cin>>price;
            cout<<"Enter the stock position of the book : ";
            cin>>stock_position;
        }
        void search(int bookId){
            if(bookId==id && stock_position>0){
                cout<<"Title: "<<title<<endl;
                cout<<"Author: "<<author<<endl;
                cout<<"Publisher: "<<publisher<<endl;
                cout<<"Price: "<<price<<endl;
                cout<<"Stock Position: "<<stock_position<<endl;
            }
            else{
                cout<<"Book not Available!"<<endl;
            }
        }
};

int main(){
    Books b[3];
    int bookId;
    cout<<"Enter the id of the book : ";
    cin>>bookId;
    for(int i=0;i<3;i++){
        b[i].search(bookId);
    }
    return 0;
}