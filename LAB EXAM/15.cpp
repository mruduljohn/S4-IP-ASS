#include<iostream>
using namespace std;

class Vehicle{
    protected:
        double mileage,price;
        void getVehicle(){
            cout<<"Enter the mileage and price: ";
            cin>>mileage>>price;
        }
};

class Car: public Vehicle{
    protected:
        double ownershipCost;
        int warranty;
        int seatcapacity;
        string fueltype;
        void getCar(){
            cout<<"Enter the ownership cost, warranty, seat capacity and fuel type: ";
            cin>>ownershipCost>>warranty>>seatcapacity>>fueltype;   
        }
        void display(){
            cout<<"Ownership Cost: "<<ownershipCost<<endl;
            cout<<"Warranty: "<<warranty<<" years"<<endl;
            cout<<"Seat Capacity: "<<seatcapacity<<endl;
            cout<<"Fuel Type: "<<fueltype<<endl;
            cout<<"Mileage: "<<mileage<<endl;
            cout<<"Price: "<<price<<endl;
        }
};

class Bike: public Vehicle{
    protected:
        int noCylinders;
        int noGears;
        string coolingtype;
        string wheeltype;
        int fueltanksize;
        void getBike(){
            cout<<"Enter the number of cylinders, number of gears, cooling type, wheel type and fuel tank size: ";
            cin>>noCylinders>>noGears>>coolingtype>>wheeltype>>fueltanksize;
        }
        void display(){
            cout<<"Number of cylinders: "<<noCylinders<<endl;
            cout<<"Number of gears: "<<noGears<<endl;
            cout<<"Cooling type: "<<coolingtype<<endl;
            cout<<"Wheel type: "<<wheeltype<<endl;
            cout<<"Fuel tank size: "<<fueltanksize<<" inches"<<endl;
            cout<<"Mileage: "<<mileage<<endl;
            cout<<"Price: "<<price<<endl;
        }
};

class Audi:public Car{
    protected:
        string model;
    public:
        Audi(string s){
            model = s;
            cout<<"Enter the details of the Audi\n";
            getVehicle();
            getCar();
        }
        void display(){
            cout<<"Model: "<<model<<endl;
            Car::display();
        }
};

class Ford:public Car{
    protected:
        string model;
    public:
        Ford(string s){
            model = s;
            cout<<"Enter the details of the Ford\n";
            getVehicle();
            getCar();
        }
        void display(){
            cout<<"Model: "<<model<<endl;
            Car::display();
        }
};

class Bajaj:public Bike{
    protected:
        string make;
    public:
        Bajaj(string s){
            make = s;
            cout<<"Enter the details of the Bajaj\n";
            getVehicle();
            getBike();
        }
        void display(){
            cout<<"Make: "<<make<<endl;
            Bike::display();
        }
};

class TVS:public Bike{
    protected:
        string make;
    public:
        TVS(string s){
            make = s;
            cout<<"Enter the details of the TVS\n";
            getVehicle();
            getBike();
        }
        void display(){
            cout<<"Make: "<<make<<endl;
            Bike::display();
        }
};

int main(){
    Audi a1("Audi_A4");
    a1.display();
    Ford f1("Ford_EcoSport");
    f1.display();
    Bajaj b1("Bajaj_Pulsar");
    b1.display();
    TVS t1("TVS_Apache");
    t1.display();
    return 0;
}