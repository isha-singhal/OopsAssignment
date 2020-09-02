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
    void print()
    {
       cout<<real<<" +i"<<img<<"\n";
    }
    Complex operator == (Complex const &obj)
    {
        if(real == obj.real)
        {
           if(img == obj.img)
            {
               cout<<"They are equal \n";
            }
        }

    }
    Complex operator != (Complex const &obj)
    {
        if(real != obj.real)
        {
           if(img != obj.img)
            {
               cout<<"They are not equal \n";
            }
        }
    }

    private:
    int real ,img ;
};

int main()
{
    Complex c1(5,5), c2(5,5);
    cout<<"The complex 1 is: ";
    c1.print();
    cout<<"The complex 2 is: ";
    c2.print();
    c1 == c2;
    Complex c3(10,15), c4(6,8);
    cout<<"The complex 3 is: ";
    c3.print();
    cout<<"The complex 4 is: ";
    c4.print();
    c3 != c4;
return 0;
}
