//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        // code he
        Node*t;
        t=head;
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        Node*d1=NULL;
        
        Node*d2=NULL;
        Node*head1=NULL;
        Node*head2=NULL;
        while(t)
        {  
            if(t->data%2==0)
            {if(!head1)
           {
              d1=t;
              head1=d1;
             
           }
            else
            {
                d1->next=t;
                d1=d1->next;
            }
            }
            else{
            if(!head2)
            {
                d2=t;
                head2=d2;
            
            }
               else{
                  d2->next=t;
                 d2=d2->next;
                }
            }
            t=t->next;
            
        } 
       if(d1)
       { d1->next=head2;
       
          
       }
       if(d2)
       {
           d2->next=NULL;
       }
       if(head1)
       {
           return head1; 
       }
       return head2;
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends