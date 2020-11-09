//QUESTION 5
//Implementation of hybrid inheritance.
#include<iostream>
using namespace std;

class Parent
{
private:
    int x;
public:
    Parent()  //Default Constructor
    {
        cout<<"Parent is inside Base Class"<<endl;
    }
    Parent(int i) //Parameterized Constructor
    {
        x=i;
    }
    ~Parent()   //Destructor
    {
        cout<<"This is Destructor"<<endl;
    }
    void print()
    {
        cout<<"Value of variable inside Base Class is: "<<x<<endl;
    }
    int getX()
    {
        return x;
    }
};

class Child1 : public Parent
{
public:
    Child1(int j):Parent(j)
    {
        cout<<"This is Multiple Inheritance"<<endl;
    }
    void print()
    {
        cout<<"Child 1 is Derived Class of Parent Class: "<<getX()<<endl;
    }
};

class Child2 : public Parent
{
public:
    Child2(int i):Parent(i)
    {
        cout<<"This is Multiple Inheritance"<<endl;
    }
    void print()
    {
        cout<<"Child 2 is Derived Class of Parent Class: "<<getX()<<endl;
    }
};

class Child3 : virtual public Parent
{
public:
    Child3(int j):Parent(j)
    {
        cout<<"This is Multi-level Inheritance"<<endl;
    }
    void print()
    {
        cout<<"Child 3 is Derived Class of Parent Class: "<<getX()<<endl;
    }
};

int main()
{
Parent obj;
Parent obj1(100);
obj1.print();
Child1 obj2(10);
obj2.print();
Child2 obj3(20);
obj3.print();
Child3 obj4(10);
obj4.print();
return 0;
}

