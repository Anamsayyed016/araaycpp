#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,6,7,11,20};
        for(int i=0;i<6;i++)
        {
            if(arr[i+1]-arr[i]>1){

                    int start = arr[i]>1;
                    while (start<arr[i+1])
                    {
                        cout<<start<<endl;
                        start++;
                    }
            }
        }
}