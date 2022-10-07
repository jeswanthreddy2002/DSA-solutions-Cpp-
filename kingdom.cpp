#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int z;
	cin>>z;
	priority_queue<int>q;
	for(int i=0;i<n;i++)
	{
	    int k;
	    cin>>k;
	    q.push(k);
	}
	int count=0;
   while(z)
   {  int a= q.top();
       int b=q.top()/2;
       q.pop();
       
       q.push(b);
       count++;
       z=z-a;
   }
   if(count==0)
   {
       cout<<"Evacuate"<<endl;
   }
	return 0;
}
