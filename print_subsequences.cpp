/*
#include<bits/stdc++.h>
using namespace std;
void print(string &st,int idx,string newstring)
{
    if(idx==st.length())
    {  cout<<newstring<<endl;
       return;
    }

char ch=st[idx];
    print(st,idx+1,newstring+ch);
  
    //v.push_back(newstring);
    print(st,idx+1,newstring);
}
int main()
{
     string st="aaa";
     vector<string>v;
     print(st,-1,"");
}
*/

// PRINT UNIQUE SUBSEQUENCES OF A STRING

   #include<bits/stdc++.h>
using namespace std;
void print(string &st,int idx,string newstring,set<string>&s)
{
    if(idx==st.length())
    {   if(s.find(newstring)!=s.end())
    {
        return;
    }
        else{
            cout<<newstring<<endl;
              s.insert(newstring);
              
              return;
        }
        
    }

char ch=st[idx];
    print(st,idx+1,newstring+ch,s);
  
    //v.push_back(newstring);
    print(st,idx+1,newstring,s);
}
int main()
{
     string st="aaa";
     set<string>s;
     vector<string>v;
     print(st,0,"",s);
}