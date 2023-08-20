#include<iostream>
#include<string>
using namespace std;

class Numstring{
        
    public:
        string s;
        int number;
        Numstring(){
            cout<<"Enter the string : ";
            cin>>s;
            cout<<"Enter the number : ";
            cin>>number;
        }
        friend void palindrome(int n);
        friend void palindrome(string s1);
};

void palindrome(int n){

    //number palindrome check
    int temp = n;
    int rev = 0,rem;
    while(temp!=0){
        rem = temp%10;;
        rev = rev*10 +rem;
        temp = temp/10;
    }
    if(rev == n){
        cout<<"Number is palindrome"<<endl;
    }
    else{
        cout<<"Number is not palindrome"<<endl;
    }
}
void palindrome(string s1){
    //string palindrome check
    string revs = "";
        for(int i=s1.length()-1;i>=0;i--){
        revs = revs + s1[i];
    }
    if(revs == s1){
        cout<<"String is palindrome"<<endl;
    }
    else{
        cout<<"String is not palindrome"<<endl;
    }
}

int main(){
    Numstring n;
    palindrome(n.number);
    palindrome(n.s);
    return 0;
}
