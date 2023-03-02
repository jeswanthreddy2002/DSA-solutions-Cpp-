//{ Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}
// } Driver Code Ends


stack<int>mi;
	int m;
void push(stack<int>& s, int a){
	// Your code goes here

	
if(s.empty())
{
    m=a;
}
//cout<<m<<" ";
s.push(a);

m=min(m,a);
    mi.push(m);
 //cout<<mi.top()<<" ";


	

}
bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n)
	{
	     return true;
	}
	return false;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(s.size()==0)
	{
	    return true;
	}
	return false;
}

int pop(stack<int>& s){
	// Your code goes here
	if(!s.empty())
	{  int k=s.top();
	   s.pop();
	   if(!mi.empty())
	   {
	   mi.pop();
	   }
	    
	    return k;
	}
	
}

int getMin(stack<int>& s){
	// Your code goes here
	if(!mi.empty())
	{
	    return mi.top();
	}
	return -1;
}





// stack<int> ss;

// void push(stack<int>& s, int a)
// {
// 	s.push(a);
//     if(ss.size() == 0 || a <= ss.top())
//     {
//         ss.push(a);
//     }
//     return;
// }

// bool isFull(stack<int>& s,int n){
// 	if(s.size() == n)
// 	{
// 	    return true;
// 	}
// 	return false;
// }

// bool isEmpty(stack<int>& s){
// 	if(s.size() == 0)
// 	{
// 	    return true;
// 	}
// 	return false;
// }

// int pop(stack<int>& s)
// {
// 	if(s.size() == 0)
// 	{
// 	    return -1;
// 	}
// 	int a = s.top();
// 	s.pop();
// 	if(ss.top() == a)
// 	{
// 	    ss.pop();
// 	}
// 	return a;
// }

// int getMin(stack<int>& s)
// {
//     if(ss.size() == 0)
//     {
//         return -1;
//     }
//     return ss.top();
// }