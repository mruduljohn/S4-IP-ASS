#include<iostream>
#include<math.h>
using namespace std;

class Series{
    int x,n;
    float sum;
    public:
        Series(int X,int N){
            x = X;
            n = N;
            sum = 1;
            for(int i=2;i<=n;i++){
                sum += pow(x,i);
            }
            cout<<"Sum of the series is: "<<sum<<endl;
        }
};

int main(){
    Series s1(2,3);
    Series s2(3,4);
    return 0;
}