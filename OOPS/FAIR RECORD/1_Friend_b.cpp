#include<iostream>
using namespace std;

class Array{
    int arr[5];
    public:
        Array(){
            for(int i=0;i<5;i++){
                arr[i] = i+1;
            }
        }
        void display(){
            for(int i=0;i<5;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        friend void multiply(Array &a,int n);
};

void multiply(Array &a,int n){
    for(int i=0;i<n;i++){
        a.arr[i] = a.arr[i]*n;
    }
}

int main(){
    Array a;
    a.display();
    multiply(a,5);
    a.display();
    return 0;
}