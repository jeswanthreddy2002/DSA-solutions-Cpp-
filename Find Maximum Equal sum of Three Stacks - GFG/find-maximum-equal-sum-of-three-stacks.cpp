//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
       int sum1=0;
       int sum2=0;
       int sum3=0;
       int maxsum;
       for(int i=0;i<S1.size();i++)
       {
           sum1+=S1[i];
       }
       for(int i=0;i<S2.size();i++)
       {
           sum2+=S2[i];
       }
       for(int i=0;i<S3.size();i++)
       {
           sum3+=S3[i];
       }
        maxsum=max(max(sum1,sum2),sum3);
        int j=0,k=0,l=0;
        while(j<S1.size()&&k<S2.size()&&l<S3.size())
        {   if(maxsum==sum1&&maxsum==sum2&&maxsum==sum3)
          {
            return maxsum;
          }
            
            if(maxsum==sum1)
            {
                sum1=sum1-S1[j++];
            }
            if(maxsum==sum2)
            {
                sum2=sum2-S2[k++];
            }
            if(maxsum==sum3)
            {
                sum3=sum3-S3[l++];
            }
             maxsum=max(max(sum1,sum2),sum3);
        }
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends