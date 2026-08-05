class Solution {
public:
    string multiply(string num1, string num2) 
    {
        if(num1=="0"||num2=="0")
        {
            return "0";
        }
        vector<int> result1(num2.length(),0);
        vector<vector<int>> result(num1.length(),result1);
        int m=0;
        int n=0;
        for(int i=num1.length()-1;i>-1;i--)
        {
            for(int j=num2.length()-1;j>-1;j--)
            {
                result[m][n]=(num1[i]-'0')*(num2[j]-'0');
                n++;
            }
            m++;
            n=0;
        }
        vector<vector<int>> columnGather;
        int digitCount=0;
        for(int i=0;i<num1.size();i++)
        {
            vector<int> column;
            for(int j=0;j<digitCount;j++)
            {
                column.push_back(0);
            }
            for(int j=0;j<num2.size();j++)
            {
                if(j!=0)
                {
                    result[i][j]+=result[i][j-1];
                }
                column.push_back(result[i][j]%10);
                result[i][j]/=10;
                if(j+1==num2.size())
                {
                    column.push_back(result[i][j]);
                }
            }
            columnGather.push_back(column);
            digitCount++;
        }
        string output="";
        int carry=0;
        for(int i=0;i<num2.size()+num1.size();i++)
        {
            int digit=carry;
            for(int j=0;j<num1.size();j++)
            {
                if(i<columnGather[j].size())
                {
                    digit+=columnGather[j][i];
                }
            }
            carry=digit/10;
            output+=(digit%10+'0');
        }
        reverse(output.begin(),output.end());
        while(output.length()>1&&output[0]=='0')
        {
            output.erase(output.begin());
        } 
        return output;
    }
};
