#include<iostream>
using namespace std;

class Fibonacci{
    int n;
    public:
        Fibonacci(){
            cout<<"Enter the number of terms: ";
            cin>>n;
        }
        Fibonacci(int x){
            n = x;            
        }
        void getFibonacci(){
            int a=0,b=1,c;
            cout<<a<<" "<<b<<" ";
            for(int i=0;i<n-2;i++){
                c=a+b;
                cout<<c<<" ";
                a=b;
                b=c; 
            }
            cout<<endl;
        }
};

int main(){
    Fibonacci f1;
    f1.getFibonacci();
    Fibonacci f2(10);
    f2.getFibonacci();
    return 0;
}