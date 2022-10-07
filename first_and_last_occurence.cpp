#include<bits/stdc++.h>
using namespace std;
static int first=-1,last=-1;
void first_and_last_occurence(string &find,int idx,char &c)
{
    if(idx==find.length())
    {  cout<< first<<" "<< last<<endl;
        return;
    }
    if(find[idx]==c)
    {
        if(first==-1)
        {
            first=idx;
        }
        else{
            last=idx;
        }
    }
    first_and_last_occurence(find,idx+1,c);
}
int main()
{
    string find="abaacdaefaah";
    char c;
    cin>>c;
    first_and_last_occurence(find,0,c);
}