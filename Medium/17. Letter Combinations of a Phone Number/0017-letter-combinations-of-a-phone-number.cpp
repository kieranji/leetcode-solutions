class Solution {
public:
    vector<string> letterCombinations(string digits) 
    {
        if(digits.empty())
        {
            return {};
        }
        vector<string> phone= 
        {
            "abc",   // 2
            "def",   // 3
            "ghi",   // 4
            "jkl",   // 5
            "mno",   // 6
            "pqrs",  // 7
            "tuv",   // 8
            "wxyz"   // 9
        };

        int index=0;
        vector<int> button;
        while(index<digits.length())
        {
            button.push_back(digits[index]-'2');
            index++;
        }
        index=0;
        vector<string> output;
        while(index<phone[button[0]].length())
        {
            output.push_back(string(1, phone[button[0]][index]));
            index++;
        }
        if(digits.length()==1)
        {
            return output;
        }
        index=0;
        for(int i=1;i<button.size();i++)
        {
            vector<string> next;
            for(int j=0;j<output.size();j++)
            {
                for(int k=0;k<phone[button[i]].length();k++)
                {
                    next.push_back(output[j]+phone[button[i]][k]);
                }
            }
            output=next;
        }
        return output;
    }
};
