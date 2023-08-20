#include<iostream>
using namespace std;

class Matrix{
    int a[3][3];
    public:
        void read(){
            cout<<"Enter the elements of the matrix: "<<endl;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cin>>a[i][j];
                }
            }
        }
        void display(){
            cout<<"The matrix is: "<<endl;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        Matrix operator~(){
            Matrix m;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    m.a[i][j]=a[j][i];
                }
            }
            return m;
        }
};

int main(){
    Matrix m1,m2;
    m1.read();
    m1.display();
    m2= ~m1;
    m2.display();
    return 0;
}