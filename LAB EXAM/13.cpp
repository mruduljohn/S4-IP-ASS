#include<iostream>
using namespace std;

class Large{
    public:
        void Largest(int arr[]){
            int max = arr[0];
            for(int i=0;i<10;i++){
                if(arr[i]>max){
                    max = arr[i];
                }
            }
            cout<<"The largest element is: "<<max<<endl;

        }
};

class Small{
    public:
        void Smallest(int arr[]){
            int min = arr[0];
            for(int i=0;i<10;i++){
                if(arr[i]<min){
                    min = arr[i];
                }
            }
            cout<<"The smallest element is: "<<min<<endl;
        }
};

class Array:public Large,public Small{
    public:
        int arr[10];
        void read(){
            cout<<"Enter the elements of the array: ";
            for(int i=0;i<10;i++){
                cin>>arr[i];
            }
        }
        void display(){
            cout<<"The elements of the array are: ";
            for(int i=0;i<10;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            Largest(arr);
            Smallest(arr);
        }
};

int main(){
    Array a1;
    a1.read();
    a1.display();
    // a1.Largest(a1.arr);
    // a1.Smallest(a1.arr);
    return 0;
}