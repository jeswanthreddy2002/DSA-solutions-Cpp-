#include<bits/stdc++.h>
using namespace std;
void divide(int arr[],int &n,int&s,int&e)
{
    if(s>=e)
    {
      return;
    }
    int mid=s+(e-s)/2;
    int leftarrdivide(arr,n,s,mid-1);
    divide(arr,n,mid+1,n-1);
    merge(arr)
}
int main()
{  

    int arr[]={2,7,2,1,1,9,5,8,6,10,3};
   
    divide(arr,12,0,11);
}