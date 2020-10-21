//QUESTION 1
//Inheritance promotes software reuse, saves time and prevent errors
#include<iostream>
using namespace std;

//Base class
class Vehicle{
public:
  Vehicle(){
    cout<<"I am Vehicle of Base Class"<<endl;
  }

//Duplication of several functions promotes software reuse, saves time and prevent errors.
void applyBrakes(){
  cout<<"Apply Brakes!!"<<endl;
}

void getCapacity(){
  cout<<"Get Capacity!!"<<endl;
}

void fuelAmount(){
  cout<<"Fuel Amount!!"<<endl;
}
};
//Derived class
class Bus: public Vehicle{
public:
  Bus(){
    cout<<"I am Bus of Bus Class"<<endl;
  }
};
//Derived class
class Car: public Vehicle{
public:
  Car(){
    cout<<"I am Car of Car Class"<<endl;
  }
};
//Derived class
class Truck: public Vehicle{
public:
  Truck(){
    cout<<"I am Truck of Truck Class"<<endl;
  }
};

int main(){
  Vehicle v1;
  v1.applyBrakes();
  v1.getCapacity();
  v1.fuelAmount();
  cout<<endl;

  Bus b1;
  b1.applyBrakes();
  b1.getCapacity();
  b1.fuelAmount();

  cout<<endl;
  Car c1;
  c1.applyBrakes();
  c1.getCapacity();
  c1.fuelAmount();

  cout<<endl;
  Truck d1;
  d1.applyBrakes();
  d1.getCapacity();
  d1.fuelAmount();
}
