#include<iostream>
using namespace std;
void box(int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 0)
			{cout << "*";}
			else if (i == r - 1)
			{
				cout << "*";
			} else if (j == 0 )
			{
				cout << "*";
			} else if ( j == c - 1)
			{
				cout << "*";

			} else {
				cout << " ";
			}

		}
		cout << "\n";
	}


}
void oval(int r, int c) {
	int maxr = r / 2;
	maxr = r - maxr;
	int maxc = c / 2;
	int firstblock  = c - maxc - maxc / 2 - 1;//to find 1st block in 1st row where we should start printing the pattern
	int lastblock = firstblock + maxc - 1;
	int firstleft = r - maxr - maxr / 2 ;//to find the 1st block column wise to print *
	int lastleft = firstleft + maxr - 1;
	int x = firstblock - 1;
	int y = lastblock + 1;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 0 || i == r - 1)
			{
				if (j >= firstblock && j <= lastblock)
				{
					cout << "*";
				} else {
					cout << " ";
				}
			} else if (i == 1 || i == r - 2)
			{
				if ( j == y || j == x)
				{
					cout << "*";
				} else {
					cout << " ";
				}
			} else {
				if (i >= firstleft && i <= lastleft)
				{
					if (j == 0 || j == c - 1)
					{
						cout << "*";
					} else {
						cout << " ";
					}
				}
			}

		}
		cout << "\n";
	}

}
void arrow(int r,int c)
{
    int  k=1  ;
    int midrow = c/2 + 1 ; //middle row of first block (i.e. triangular part)
    int secondblock=r-midrow; // second block(i.e. straight line)
    //int r = 9 , c = 5;
    for(int i = 1 ; i <= midrow ; i++ ){

        for( int j=1 ; j <= midrow - i ; j++ )
        cout<<" ";

        for( k=1 ; k<= i ; k++)
        cout<<"*";
        --k;

        for( ; k >1; k--)
        cout<<"*";

    cout<<endl;
    }
    for(int j=1; j <=secondblock ; j++){
        for(int i =1 ; i <= midrow-1 ; i++)
        cout<<" ";
    cout<<"*"<<endl;
    }

}


void diamond(int r, int c)
{
	int midline = r / 2;
	int centroid = r * 1.4;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 0 || i == r - 1)
			{
				if (j == midline)
				{
					cout << "*";
				} else {
					cout << " ";
				}
			}
			else {

				if (j == midline - i || j == midline + i)
				{
					cout << "*";
				} else if (i - j == midline)
				{
					cout << "*";

				}
				else if (i + j == centroid)
				{
					cout << "*";

				}
				else {
					cout << " ";

				}
			}
		}
		cout << "\n";
	}

}


int main()
{
	int row, col;
	cout << "enter number of rows and Column of box \n";
	cin >> row >> col  ;
	box(row, col);
	int row1, col1;
	cout << "enter number of rows and Column of oval \n";
	cin >> row1 >> col1  ;
	oval(row1, col1);

	int row2, col2;
	cout << "enter number of rows and Column of Arrow \n";
	cin >> row2 >> col2  ;
	arrow(row2, col2);

	int row3, col3;
	cout << "enter number of rows and Column of Diamond \n";
	cin >> row3 >> col3  ;
	diamond(row3, col3);

	return 0;
}
