class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> output;
        sort(intervals.begin(),intervals.end());
        int maximum=intervals[0][1];
        int minimum=intervals[0][0];
        for(int i=1;i<intervals.size();i++)
        {
            int min2=intervals[i][0];
            int max2=intervals[i][1];
            if(maximum>=min2)
            {
                maximum=max(maximum,max2);
            }
            else
            {
                output.push_back({minimum,maximum});
                minimum=min2;
                maximum=max2;
            }
        }
        output.push_back({minimum, maximum});
        return output;
    }
};
