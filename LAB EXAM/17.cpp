#include<iostream>
using namespace std;

class Vector{
    int arr[3];
    public:
        void read(){
            cout<<"Enter the elements of the vector: ";
            for(int i=0;i<3;i++){
                cin>>arr[i];
            }
        }
        void display(){
            cout<<"Vector is : "<<arr[0]<<"i + "<<arr[1]<<"j + "<<arr[2]<<"k"<<endl;
            
        }
        friend Vector multiply(Vector v1,Vector v2){
            Vector R;
            for(int i=0;i<3;i++){
                R.arr[0] = v1.arr[1]*v2.arr[2] - v1.arr[2]*v2.arr[1];
                R.arr[1] = -(v1.arr[0]*v2.arr[2] - v1.arr[2]*v2.arr[0]);
                R.arr[2] = v1.arr[0]*v2.arr[1] - v1.arr[1]*v2.arr[0];
            }
            return R;
        }
};

int main(){
    Vector v1,v2,v3;
    Vector *ptr;
    ptr = &v1;
    ptr->read();
    ptr->display();
    ptr = &v2;
    ptr->read();
    ptr->display();
    v3 = multiply(v1,v2);
    ptr = &v3;
    ptr->display();
    return 0;
}