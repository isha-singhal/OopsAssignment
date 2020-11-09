//QUESTION 4
//Shape Class
#include<iostream>
using namespace std;

class Shape
{
protected:
    double length;
    double area;
public:
    Shape()
    {
        cout<<"This is a Shape"<<endl;
    }
    double getLength()
    {
        return length;
    }
    double getArea()
    {
        return area;
    }
};

class Shape_2D:public Shape
{
protected:
    double perimeter;
public:
    Shape_2D()
    {
        cout<<"This is a 2D Shape"<<endl;
    }
    double getPerimeter()
    {
        return perimeter;
    }
};

class Circle: public Shape_2D
{
public:
    Circle( double Radius = 0)
    {
        cout<<"This is a Circle"<<endl;
        length = Radius;
        area =3.14*length*length;
        perimeter =3.14*2*length;
    }
};

class Square: public Shape_2D
{
public:
    Square(double Size = 0)
    {
        cout<<"This is a Square"<<endl;
        length=Size;
        area=length*length;
        perimeter=4*length;
    }
};

class Triangle:public Shape_2D
{
public:
    Triangle( double Size = 0)
    {
        cout<<"This is a Triangle"<<endl;
        length=Size;
        area=0.433*length*length;
        perimeter =3*length;
    }
};

class Shape_3D:public Shape
{
protected:
    double volume;
public:
    Shape_3D()
    {
        cout<<"This is a 3D Shape"<<endl;
    }
    double getVolume()
    {
        return volume;
    }
};

class Cube:public Shape_3D
{
public:
    Cube( double Size=0)
    {
        cout<<"This is a Cube"<<endl;
        length=Size;
        area=6*length*length;
        volume=length*length*length;
    }
};

class Sphere:public Shape_3D
{
public:
    Sphere( double Radius = 0)
    {
        cout<<"This is a Sphere"<<endl;
        length=Radius;
        area=4*3.14*length*length;
        volume=4.0/3*3.14*length*length*length;
    }
};

int main()
{
Circle cir(2);
cout <<"Circumference="<<cir.getPerimeter()<<'\n'<<"Area="<<cir.getArea()<<"\n"<<endl;
Square sq(2);
cout <<"Perimeter="<<sq.getPerimeter()<<'\n'<<"Area="<<sq.getArea()<<"\n"<<endl;
Triangle tr(2);
cout <<"Perimeter="<<tr.getPerimeter()<<'\n'<<"Area="<<tr.getArea()<<"\n"<<endl;
Cube cube(2);
cout <<"Curved Surface Area="<<cube.getArea()<<'\n'<<"Volume="<<cube.getVolume()<<"\n"<<endl;
Sphere sphr(2);
cout <<"Curved Surface Area="<<sphr.getArea()<<'\n'<<"Volume="<<sphr.getVolume()<<"\n"<<endl;
return 0;
}

