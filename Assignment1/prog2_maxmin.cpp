#include <iostream>
using namespace std;
int main(){
    int arr[20];
    int size,i,j,temp;
    cout<<"Enter size of array\n";
    cin>>size;

    cout<<"Enter the elements of array\n";
    for(i=0;i<size;i++)
        cin>>arr[i];

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Second maximum number from array is "<< arr[1];
    cout<<"\nSecond minimum number from array is "<< arr[size-2]<"\n";
}

