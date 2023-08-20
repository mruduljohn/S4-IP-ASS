#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(int num){
            a = num;
        }
        friend void cube(Number n);
};

void cube(Number n){
    cout<<"Cube of "<<n.a<<" is "<<n.a*n.a*n.a<<endl;
}

int main(){
    Number n(3);
    cube(n);
    return 0;
}