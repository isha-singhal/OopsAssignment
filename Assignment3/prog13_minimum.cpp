#include <iostream>
#include <array>
#include <string>
using namespace std;

int recursiveMinimum (int arr[], int x, int y)
{
    if(y ==1)
    {
        return arr[x];
    }
    else
    {
        return min(arr[y-1],recursiveMinimum(arr, x,y-1));
    }
}

int main ()
{
    int n;
    cout<<"enter the size of array: "<<endl;
    scanf("%d",&n);
    int A[n];
    cout<<"enter elements: "<<endl;
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    int a = 0;
    int b = n;
    cout<<"The minimum number in the array is: "<<recursiveMinimum(A, a, b)<<endl;

}
