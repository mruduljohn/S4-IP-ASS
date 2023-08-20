#include <iostream>
using namespace std;

class Sample{
    int x;
    static int count;
    public:
        Sample(){
            cout<<"Enter the value of x: ";
            cin>>x;
            count++;
        }
        void getCount(){
            cout<<"The number of objects created is: "<<count<<endl;
        }
};


int Sample::count = 0;

int main(){
    Sample s1;
    s1.getCount();
    Sample s2;
    s1.getCount();
    Sample s3;
    s1.getCount();
    Sample s4,s5,s6;
    s1.getCount();
    return 0;
}

