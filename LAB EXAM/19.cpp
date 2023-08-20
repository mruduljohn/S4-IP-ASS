#include<iostream>
#include<math.h>
using namespace std;

inline int addition(int a,int b){
    return a+b;
}

inline int subtraction(int a, int b){
    return a-b;
}

inline int multiplication(int a,int b){
    return a*b;
}

inline int division(int a,int b){
    return a/b;
}

inline int Modulus(int a,int b){
    return a%b;
}

inline int power(int a,int b){
    return pow(a,b);
}

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Addition: "<<addition(a,b)<<endl;
    cout<<"Subtraction: "<<subtraction(a,b)<<endl;
    cout<<"Multiplication: "<<multiplication(a,b)<<endl;
    cout<<"Division: "<<division(a,b)<<endl;
    cout<<"Modulus: "<<Modulus(a,b)<<endl;
    cout<<"Power: "<<power(a,b)<<endl;
    return 0;
}


