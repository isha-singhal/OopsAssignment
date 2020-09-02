#include<iostream>
#include<math.h>
using namespace std;

float sphereVolume(float r)
{
    return ((4.0/3.0)*3.14159*pow(r,3));
}

int main()
{
    float radius;
    cout<<"Enter the radius of the sphere : " ;
    cin>>radius;
    float volume = sphereVolume(radius);
    cout<<"Volume of the sphere is : "<<volume<<endl;
}
