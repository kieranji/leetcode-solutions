class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int index1=0;
        int index2=1;
        int flag=0;
        string output="";

        if(strs.size()==1)
        {
            return strs[0];
        }

        int minLength=strs[0].size();
        for(int i=1;i<strs.size();i++) 
        {
            if(strs[i].size()<minLength) 
            {
                minLength=strs[i].size();
            }
        }


        while(index1<minLength)
        {
            while(index2<strs.size()&&strs[0][index1]==strs[index2][index1])
            {
                index2++;
                if(index2==strs.size())
                {
                    output+=strs[0][index1];
                    flag=1;
                }
            }
            if(flag==0)
            {
                return output;
            }
            flag=0;
            index2=1;
            index1++;
        }
        return output;
    }
};
