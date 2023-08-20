#include<iostream>
#include<string>
using namespace std;

class Numstring{
    string s;
    int number;
    public:
        void palindrome(int n){
            int number = n;
            int rev = 0;
            int rem;
            while(n!=0){
                rem = n%10;
                rev = rev*10 + rem;
                n /= 10;
            }
            if(rev==number){
                cout<<"Palindrome"<<endl;
            }
            else{
                cout<<"Not Palindrome"<<endl;
            }
        }
        void palindrome(string s1){
            s = s1;
            string rev = "";
            for(int i=s1.length()-1;i>=0;i--){
                rev += s1[i];
            }
            if(rev==s1){
                cout<<"Palindrome"<<endl;
            }
            else{
                cout<<"Not Palindrome"<<endl;
            }
        }
};

int main(){
    Numstring n;
    n.palindrome(12321);
    n.palindrome("madam");
    return 0;
}