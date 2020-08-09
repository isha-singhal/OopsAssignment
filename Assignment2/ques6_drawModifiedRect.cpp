#include<iostream>
#include<stdio.h>
using namespace std;

class Rectangle {
private:
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
	int x4;
	int y4;
	int length;
	int width;
	int perimeter;
	int area;
	char bodyElement;
	char borderElement;



public:
	Rectangle(int p1x, int p2x, int p3x, int p4x , int p1y, int p2y, int p3y, int p4y)
	{

		setPoint(p1x, p2x, p3x, p4x, p1y, p2y, p3y, p4y);
	}
	void setPoint(int p1x, int p2x, int p3x, int p4x , int p1y, int p2y, int p3y, int p4y)
	{
		if (p1x >= 0 && p1x <= 20)
		{
			x1 = p1x;
		} else {
			cout << "please enter something valid";
		}
		if (p2x >= 0 && p2x <= 20)
		{
			x2 = p2x;
		} else {
			cout << "please enter something valid";
		}
		if (p3x >= 0 && p3x <= 20)
		{
			x3 = p3x;
		} else {
			cout << "please enter something valid";
		}
		if (p4x >= 0 && p4x <= 20)
		{
			x4 = p4x;
		} else {
			cout << "please enter something valid";
		}
		if (p1y >= 0 && p1y <= 20)
		{
			y1 = p1y;
		} else {
			cout << "please enter something valid";
		}
		if (p2y >= 0 && p2y <= 20)
		{
			y2 = p2y;
		} else {
			cout << "please enter something valid";
		}
		if (p3y >= 0 && p3y <= 20)
		{
			y3 = p3y;
		} else {
			cout << "please enter something valid";
		}
		if (p4x >= 0 && p4x <= 20)
		{
			y4 = p4y ;
		} else {
			cout << "please enter something valid";
		}

		if (x1 == x4 && y1 == y2 && x3 == x2 && y3 == y4)
		{
			cout << "It is a Rectangle\n";
		} else {
			cout << "It is not a Rectangle\n";
		}

	}
	void dimensions()
	{
		int value1 = x2 - x1;
		if (value1 < 0)
		{
			value1 *= -1;
		}
		int value2 = y3 - y1;
		if (value2 < 0)
		{
			value2 *= -1;
		}

		if (value1 > value2)
		{
			length = value1;
			cout << "Length of rectangle is :" << length << "\n";
			width = value2;
			cout << "Width of rectangle is :" << width << "\n";
		}
		else {
			length = value2;
			cout << "Length of rectangle is :" << length << "\n";
			width = value1;
			cout << "Width of rectangle is :" << width << "\n";
		}



	}
	void Perimeter()
	{

		perimeter = 2 * (length + width);
		cout << perimeter << "\n";
	}
	void Area()
	{
		area = length * width;
		cout << area;
	}
	void isSquare()
	{
		if (length == width)
		{
			cout <<"It is also a Square. ";
		} else {
			cout << "It is not a Square. ";
		}
	}
	void setFillCharacter()
	{
	    char character;
		cout << "enter the character you want to fill the body of the rectangle with. \n";
		cin >> character;
		bodyElement = character;
	}
	void setPerimeterCharacter()
	{
		char character;
		cout << "enter the element you want to display at the border of rectangle. \n";
		cin >> character;
		borderElement = character;

	}
	void draw() {

        int sx , ex , x , X ;
        int sy , ey , y , Y ;

        sx = x1;
        if(sx != x2 )
        ex = x2;
        else
        ex = x3;

        sy = y1;
        if(sy != y2)
        ey = y2;
        else
        ey = y3;

        if(sx < ex ){
        Y = ex ;
        y = sx ;
        }
        else{
        Y = sx ;
        y = ex ;
        }

        if( sy < ey ){
            x = sy ;
            X = ey ;
        }else{
            x = ey ;
            X = sy ;
        }

        for(int i = 0 ; i <= 25 ; i++){


            for( int j = 0 ; j <= 25 ; j++ ){

                if( i == 0 || i == 25 )
                cout << borderElement;
                else
                if( i >= X && i <= 25 - x && j >= y && j <= Y )
                cout << bodyElement;
                else
                if( j != 0 && j != 25 )
                cout << " ";
                else
                cout << borderElement;

            }
            cout << endl;

        }
	}
};
int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
	cout << "enter the value of all the x-coordinates first,then all the y-coordinates .\n";
	cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
	Rectangle rec(x1, x2, x3, x4, y1, y2, y3, y4);
	rec.dimensions();
	rec.isSquare();
	cout << "\n";
	cout << "Area of the rectangle is :";
	rec.Area();
	cout << "\nPerimeter of rectangle is :";
	rec.Perimeter();
	rec.setFillCharacter();
	rec.setPerimeterCharacter();
	cout<<" \n The use of draw() function that displays the rectangle inside a 25-by-25 box. ";
    cout<<endl;
	rec.draw();
	return 0;
}
