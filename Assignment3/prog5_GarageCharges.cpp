#include<iostream>
#include<math.h>
using namespace std;

float charges(float hours)
{
    float price=2.00;
    if(hours>3)
    {
        hours=hours-3;
        float cost = hours;
        price += cost*0.50;
        if(price>10.00)
        {
            price = 10.00;
        }
    }
    return price;
}

int main()
{
    float arr[3],totalhours=0.00,totalcharges=0.00;
    for(int i=0;i<3;i++)
    {
        cout<<"Enter the hours for Car "<<i+1<<endl;
        cin>>arr[i];
        totalhours+=arr[i];
    }

    cout<<"Car       Hours       Charge"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<(i+1)<<"          "<<arr[i]<<"          "<<charges(arr[i])<<endl;
        totalcharges+=charges(arr[i]);
    }
    cout<<"Total"<<"      "<<totalhours<<"        "<<totalcharges<<endl;
    return 0;
}
