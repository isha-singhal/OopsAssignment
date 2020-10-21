//QUESTION 2
// C++ program to implement
// Hierarchical Inheritance for Students at a University.
#include<iostream>
using namespace std;

// base class
class Student{
public:
    Student()
    {
        cout<<"This is a Student"<<endl;
    }

};

// first sub class
class UndergraduateStudent: virtual public Student{
public:
    UndergraduateStudent()
    {
        cout<<"This is an UndergraduateStudent"<<endl;
    }
};

// second sub class
class GraduateStudent: virtual public Student{
public:
    GraduateStudent()
    {
        cout<<"This is a GraduateStudent"<<endl;
    }
};

// sub class derived from two base classes
class Freshman: virtual public UndergraduateStudent{
public:
    Freshman()
    {
        cout<<"This is a Freshman"<<endl;
    }
};

// sub class derived from two base classes
class Junior: virtual public UndergraduateStudent{
public:
    Junior()
    {
        cout<<"This is a Junior"<<endl;
    }
};

// sub class derived from two base classes
class Senior: public UndergraduateStudent{
public:
    Senior()
    {
        cout<<"This is a Senior"<<endl;
    }
};

// sub class derived from two base classes
class DoctoralStudent: virtual public GraduateStudent{
public:
    DoctoralStudent()
    {
        cout<<"This is a DoctoralStudent"<<endl;
    }
};

// sub class derived from two base classes
class MastersStudent: virtual public GraduateStudent{
public:
    MastersStudent()
    {
        cout<<"This is a MastersStudent"<<endl;
    }
};

int  main()
{
    cout<<"PARENT/BASE CLASS : STUDENT"<<endl;
    Student obj;
    //creating object of sub class will
    //invoke the constructor of base classes
    cout<<"FIRST SUB CLASS : UNDERGRADUATE STUDENT"<<endl;
    UndergraduateStudent obj1;
    cout<<"SECOND SUB CLASS : GRADUATE STUDENT"<<endl;
    GraduateStudent obj2;
    cout<<"FRESHMAN"<<endl;
    Freshman obj3;
    cout<<"JUNIOR"<<endl;
    Junior obj4;
    cout<<"SENIOR"<<endl;
    Senior obj5;
    cout<<"DOCTORAL STUDENT"<<endl;
    DoctoralStudent obj6;
    cout<<"MASTERS STUDENT"<<endl;
    MastersStudent obj7;
    return 0;
}
