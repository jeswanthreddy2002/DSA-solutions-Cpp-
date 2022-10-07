#include <bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int strow=0;
        int stcol=0;
        int endrow=matrix.size()-1;
        int endcol=matrix[0].size()-1;
        vector<int>v;
        int total=matrix.size()*matrix[0].size();
        int count=0;
        while(count<total)
        {
        for(int i=stcol;i<=endcol&&count<total;i++)
        { count++;
           v.push_back(matrix[strow][i]) ;
        }
            strow++;
            for(int i=strow;i<=endrow&&count<total;i++)
        { count++;
           v.push_back(matrix[i][endcol]) ;
        }
            endcol--;
            for(int i=endcol;i>=stcol&&count<total;i--)
        { count++;
           v.push_back(matrix[endrow][i]) ;
        }
            endrow--;
            for(int i=endrow;i>=strow&&count<total;i--)
        { count++;
           v.push_back(matrix[i][stcol]) ;
        }
            stcol++;
        }
        return v;
}
int main()
{  vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};

    spiralOrder(matrix);
    for(int i=0;i<spiralOrder(matrix).size();i++)
    {
        cout<<spiralOrder(matrix)[i]<<" ";
    }

}