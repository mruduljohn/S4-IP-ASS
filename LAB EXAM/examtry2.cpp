#include<iostream>
#include<string.h>
using namespace std;

class String{
    int length;
    char *str;
    public:
        String(){
                length= 0;
                str = new char[length+1];
        }
        String(char *s){
                length = strlen(s);
                str = new char[length+1];
                strcpy(str,s);
        }
        void display(){
            cout<<"String :  "<<str<<endl;
        }
        String operator+(String s){
            String temp;
            strcpy(temp.str,str);
            strcat(temp.str,s.str);
            return temp;
        }
};

int main(){
    String s1("Hello"),s2("World"),s3;
    s3 = s1+s2;
    s3.display();
    return 0;
}