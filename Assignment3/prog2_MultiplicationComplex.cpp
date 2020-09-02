#include<iostream>
using namespace std;

class Complex
{
public:
    Complex(int r=0 ,int i =0)
    {
       real = r;
       img = i;
    }
    void operator>>(Complex const &obj)
    {
        cout<<"Enter Real part \n";
        cin>>real;
        cout<<"Enter Imaginary part \n";
        cin>>img;
    }
    void operator<<(Complex const &obj)
    {
        cout<<real<<" + i"<<img<<"\n";
    }
    Complex operator *(Complex const &obj)
    {
        Complex result;
        result.real = ((real*obj.real) -(img * obj.img));
        result.img = ((real*obj.img)+(img * obj.real));
        return result;
    }
private:
    int real ,img ;
};

int main()
{
    Complex c1(1,5), c2(2,4);
    Complex c3;
    c3 = c1 * c2;//(a+bi)(c+di) = ac + adi + bci + bdi2
    cout<<"Multiplication of two complex numbers \n";
    c3<<c3;
    return 0;
}
