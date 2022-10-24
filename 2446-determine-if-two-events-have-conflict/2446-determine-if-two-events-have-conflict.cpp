class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        int num1=0;
        int num2=0;
        int num3=0;
        int num4=0;
           for(int j=0;j<event1[0].size();j++)
           {  if(isdigit(event1[0][j]))
            {
               num1=num1*10+event1[0][j]-'0';
               }
           }
        for(int j=0;j<event1[1].size();j++)
           {  if(isdigit(event1[1][j]))
            {
               num2=num2*10+event1[1][j]-'0';
               }
           }
        
        
           for(int j=0;j<event2[0].size();j++)
           {  if(isdigit(event2[0][j]))
            {
               num3=num3*10+event2[0][j]-'0';
               }
           }
        for(int j=0;j<event2[1].size();j++)
           {  if(isdigit(event2[1][j]))
            {
               num4=num4*10+event2[1][j]-'0';
               }
           }
        if((num3>=num1&&num3<=num2)||(num4>=num1&&num4<=num2)||(num3<=num1&&num2<=num4)||(num1<=num3&&num4<=num2))
        {
            return true;
        }
        return false;
        
    }
};