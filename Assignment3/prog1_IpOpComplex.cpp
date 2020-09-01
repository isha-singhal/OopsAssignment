#include <iostream>
using namespace std;

class Complex
{
public:
    friend Complex operator+(Complex const &,Complex const &);
    Complex(int r=0,int i=0){
        real=r;
        img=i;
    }
    void print()
    {
         cout<<real<<" + i"<<img<<"\n";
    }
    void operator<<(Complex const &obj)
    {
        cout<<real<<" + i"<<img<<"\n";
    }
    void operator>>(Complex const &obj)
    {
        cout<<"Enter Real part\n";
        cin>>real;
        cout<<"Enter Imaginary part \n";
        cin>>img;
    }
private:
    int real,img;
};

Complex operator+(Complex const &obj1,Complex const &obj2)
{
    Complex result ;
    result.real = obj1.real + obj2.real;
    result.img = obj1.img + obj2.img;
    return result;
}

int main(){
    Complex c1(10,5), c2(2,4);
    Complex c3 = c1 + c2;
    cout << "The complex 1 is: ";
    c1.print();
    cout << "The complex 2 is: ";
    c2.print();
    cout << "The complex 3 is: ";
    c3.print();
    Complex c4 ;
    c4>> c4 ;
    cout<<"The Complex Number you have entered is\n";
    c4 <<c4;
    return 0;
}

