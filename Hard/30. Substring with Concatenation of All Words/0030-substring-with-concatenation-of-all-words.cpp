class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words)
    {
        vector<int> output;

        int wordLength=words[0].length();
        int wordCount=words.size();
        int totalLength=wordLength*wordCount;
        if(s.length()<totalLength)
        {
            return output;
        }

        unordered_map<string,int> need;

        for(int i=0;i<words.size();i++)
        {
            need[words[i]]++;
        }

        for(int offset=0;offset<wordLength;offset++)
        {
            int left=offset;
            int right=offset;
            int count=0;

            unordered_map<string,int>used;

            while(right+wordLength<=s.length())
            {
                string word=s.substr(right,wordLength);
                right+=wordLength;

                if(need.find(word)==need.end())
                {
                    used.clear();
                    count=0;
                    left=right;
                    continue;
                }

                used[word]++;
                count++;

                while(used[word]>need[word])
                {
                    string leftWord=s.substr(left,wordLength);
                    used[leftWord]--;
                    left+=wordLength;
                    count--;
                }
                if (count==wordCount)
                {
                    output.push_back(left);

                    string leftWord=s.substr(left,wordLength);
                    used[leftWord]--;
                    left+=wordLength;
                    count--;
                }
            }
        }
        return output;
    }
};
