#include <iostream>
using namespace std;

int main()
{
    cout << "Pythagorean triples less than 500 are:  \n";
    for (int i = 1; i < 500; i++)
    {
        for (int j = 1; j < 500; j++)
        {
            for (int k = 1; k < 500; k++)
            {
                int hypotenuse = i * i;
                int side1 = j * j;
                int side2 = k * k;
                int temp = side1 + side2;
                if (hypotenuse == temp)
                {
                    cout << i << ":" << j << ":" << k << "\n";
                }
            }
        }
    }
    return 0;
}
