#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int arr[n];
     int i;

     for(i=0; i<n; i++)
     {
         cin>>arr[i];
     }
     int counter=0;
     while(counter<n-1)
     {
         for(int i=0; i<n-counter; i++)
         {
             if(arr[i]>arr[i+1])
             {
                 int temp= arr[i];
                 arr[i]=arr[i+1];
                 arr[i+1]=temp;

             }
         }
         counter++;
     }
     for(int i=0; i<n; i++)
     {
         cout<<arr[i]<<" "<<endl;
     }
     return 0;
}