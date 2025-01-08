#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,4,5};
    for(int i=0;i<=4;i++)
    {
        arr[i]=arr[i]*arr[i];
        cout<<arr[i]<<endl;
    }
}