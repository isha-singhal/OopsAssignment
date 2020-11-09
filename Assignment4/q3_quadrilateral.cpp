/*QUESTION 3
 C++ program to implement
 Multilevel Inheritance for Quadrilaterals*/
#include<iostream>
using namespace std;

// base class
class Quadrilateral{
protected:
    int b1,b2,h,l1,l2;
public:
    Quadrilateral(int length1,int length2,int base1,int base2,int height)
    {
        l1=length1;
        l2=length2;
        b1=base1;
        b2=base2;
        h=height;
        cout<<"This is a Quadrilateral"<<endl;
    }
    void area()
    {
       cout<<"Area is : "<<((b1+b2)/2)*h<<endl;
    }
    int perimeter()
    {
        cout<<"Perimeter is : "<<l1+l2+b1+b2<<endl;
    }
};

// sub class
class Trapezoid: virtual public Quadrilateral{
public:
    Trapezoid(int length1,int length2,int base1,int base2,int height):Quadrilateral(length1,length2,base1,base2,height)
    {
        cout<<"This is a Trapezoid"<<endl;
    }
};

// sub class derived from two base classes
class Parallelogram: virtual public Quadrilateral{
public:
    Parallelogram(int length1,int base1,int height):Quadrilateral(length1,length1,base1,base1,height)
    {
        cout<<"This is a Parallelogram"<<endl;
    }
};

// sub class derived from three base classes
class Rectangle: virtual public Quadrilateral{
public:
    Rectangle(int length1,int base1):Quadrilateral(length1,length1,base1,base1,length1)
    {
        cout<<"This is a Rectangle"<<endl;
    }
};

// sub class derived from four base classes
class Square: virtual public Quadrilateral{
public:
    Square(int length1):Quadrilateral(length1,length1,length1,length1,length1)
    {
        cout<<"This is a Square"<<endl;
    }
};


int  main()
{
    cout<<"PARENT/BASE CLASS : QUADRILATERAL"<<endl;
    //creating object of sub class will
    //invoke the constructor of base classes
    cout<<"SUB CLASS TRAPEZOID"<<endl;
    Trapezoid obj1(3,10,11,8,7);
    obj1.perimeter();
    obj1.area();
    cout<<"SUB CLASS PARALLELOGRAM"<<endl;
    Parallelogram obj2(30,20,10);
    obj2.perimeter();
    obj2.area();
    cout<<"SUB CLASS RECTANGLE"<<endl;
    Rectangle obj3(3,5);
    obj3.perimeter();
    obj3.area();
    cout<<"SUB CLASS SQUARE"<<endl;
    Square obj4(5);
    obj4.perimeter();
    obj4.area();
    return 0;
}
