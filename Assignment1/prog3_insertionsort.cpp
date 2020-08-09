
#include <iostream>
using namespace std;
int main(){

    int size,i,j,temp;
    cout<<"Enter the size of array \n";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array \n";
    for(i=0;i<size;i++)
    {
       cin>>arr[i];
    }
    for(i=0;i<size;i++)
    {
        temp=arr[i];
        j=i-1;
        while(temp<arr[j] && (j>=0))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;

    }
    cout<<"\n Sorted array through insertion sort\n";
    for(i=0;i<size;i++)
    {
         cout<<arr[i]<<" ";
    }

}

