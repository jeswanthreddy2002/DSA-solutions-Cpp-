#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int min_price;
    int max_price;
    cin>>min_price>>max_price;
    for(int i=0;i<n;i++)
    { int k;
    cin>>k;
        v.push_back(k);
    }
    int mi=INT_MAX;
    int ma=INT_MIN;
  int i=0;
  int j=0;
  int count=0;
  while(j<n&&i<n)
  { 
    if(mi!=min_price&&ma!=max_price)
    {
        mi=min(mi,v[j]);
        ma=max(ma,v[j]);
        //cout<<mi<<" "<<ma<<endl;
        j++;
    }
    if(mi==min_price&&ma==max_price)
    { //j++;
        while(j<n&&mi==min_price&&ma==max_price)
        {  count++;
           cout<<count<<endl;
            mi=min(mi,v[j]);
        ma=max(ma,v[j]);
        j++;
        }
        i++;
        j=i;
         mi=INT_MAX;
         ma=INT_MIN;
         
    }
    /*
    if(j==n-1)
    {  mi=INT_MAX;
       ma=INT_MIN;
        i++;
        j=i;
    }
    */
  }
  cout<<count<<endl;
}