//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        Node*p=new Node(0);
        Node*d=p;
        d->next=head;
        p->next=head;
        Node*t=head;
        vector<int>v;
        int ma=-1;
        while(t)
        {
            v.push_back(t->data);
            t=t->next;
        }
        
        for(int i=0;i<v.size();i++)
        {
            ma=max(ma,v[v.size()-i-1]);
            v[v.size()-i-1]=ma;
            
            
        }
        
        t=head;
        int j=0;
    
        while(j<v.size()&&t)
        {
            if(v[j]>t->data)
            {
                p->next=t->next;
                t=t->next;
            }
            else{
                p=t;
                t=t->next;
               
            }
        
            j++;
        }
        p->next=NULL;
        return d->next;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends