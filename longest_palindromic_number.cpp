 #include<bits/stdc++.h>
using namespace std;
 void largestPalindromic(string num) {
        map<int,int>m;
        for(int i=0;i<num.size();i++)
        {
            m[num[i]-'0']++;
        }
      
        auto it=--m.end();
        string res;
        //auto it3= --m.begin();
        while(it!=m.end())
        {
            if(it->second>=2)
            { int a= it->second/2;
            
                while(a)
                {  
                    res+= to_string(it->first);
                    
                    a--;
                    
                }
                it->second=it->second%2;    
            }
            it--;
        }
        string mid;
        auto it2=--m.end();
        while(it2!=m.end())
        {
           if(it2->second==1)
           {
              mid= to_string(it2->first);
              break;
           }
           it2--;
        }
        
        string s=res;
        
        
        reverse(res.begin(),res.end());
        cout<<s+mid+res;
 }
int main()
{string num="110000005";
  largestPalindromic(num);
 }