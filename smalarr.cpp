#include<iostream>
using namespace std;
int main()
{
 int arr[]={2,3,4,5,6};
 int min=arr[0];
 for(int i=0;i>=4;i++) 
 {
   if(arr[i]<min)
   {
     min=arr[i];
   }
 }  
 cout<<min;
}