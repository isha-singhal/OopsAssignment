
#include <iostream>
using namespace std;
int main(){

    int num,i,count=0;
    cout<<"Enter the number \n";
    cin>>num;
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count>0)

        cout<<"Number is not a prime number "<<"\n";
    else
        cout<<"Number is a prime number "<<"\n";


}









