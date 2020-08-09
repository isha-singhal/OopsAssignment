
#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3,greatest=0;
    cout<<"Enter the 3 numbers \n";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    if(num1>num2 && num1>num3)
    {
        greatest=num1;
    }
    if(num2>num1 && num2>num3)
    {
        greatest=num2;
    }
    else
    {
        greatest=num3;
    }
    cout<<"Greatest number of the 3 numbers is "<< greatest<<"\n";
}




