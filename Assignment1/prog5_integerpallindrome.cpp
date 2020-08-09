
#include <iostream>
using namespace std;
int main(){

    int num,rev=0,temp;
    cout<<"Enter the number \n";
    cin>>num;
    temp=num;
    while(num>0)
    {
       rev=rev*10+num%10;
       num=num/10;
    }
    if(temp==rev)
        cout<<"Number is a pallindrome "<<"\n";

    else
        cout<<"Number is not a pallindrome "<<"\n";


}









