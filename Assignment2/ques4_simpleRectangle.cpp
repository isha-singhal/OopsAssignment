
#include<iostream>

using namespace std;

class Rectangle
{
private:
	float length = 1;
	float width = 1;

public:
	int getLength()
	{
		return length;
	}
	void setLength(float a)
    {
		if (a >= 0.0 && a <= 20.0)
		{
		   length = a;
        }
        else{
			cout << "please enter something valid";
		}

	}
	int getWidth() {
		return width;
	}
	void setWidth(float a)
	{
		if (a >= 0.0 && a <= 20.0)
		{
		    width = a;
        }
        else{
			cout << "please enter something valid";
		}
	}
	float perimeter()
	{
	    return 2*(length+width);
	}
	float area ()
	{
	    return (length * width);
	}
};
int main()
{
    Rectangle rect;
	rect.setLength(5.00);
	rect.setWidth(10.00);
	cout << "perimeter of rectangle is:";
	cout << rect.perimeter() << "\n";
	cout << "Area of rectangle is:";
	cout << rect.area() << "\n";
	return 0;
}
