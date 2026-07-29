class Solution {
public:
    string convert(string s, int numRows) 
    {
        if (numRows==1||numRows>=s.length()) 
        {
            return s;
        }
        string output="";
        vector<int> anchor;
        int index=0;
        for(int i=0;i<s.length();i+=(2*numRows-2))
        {
            output+=s[i];
            anchor.push_back(i);
            index=i;
        }
        anchor.push_back(index+(2*numRows-2));
        for(index=1;index<numRows-1;index++)
        {
            for(int i=0;i<anchor.size();i++)
            {
                if(anchor[i]-index>=0&&anchor[i]-index<s.length())
                {
                    output+=s[anchor[i]-index];
                }
                if(anchor[i]+index<s.length())
                {
                    output+=s[anchor[i]+index];
                }
            }
        }
        for(int i=0;i<anchor.size();i++)
        {
            if(anchor[i]+index<s.length())
            {
                output+=s[anchor[i]+index];
            }
        }
        return output;
    }
};