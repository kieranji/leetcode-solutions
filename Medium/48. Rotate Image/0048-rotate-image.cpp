class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int side=matrix.size()-1;
        int j=0;
        while(j<matrix.size()/2)
        {
            swap(matrix[j][j],matrix[j][side-j]);
            swap(matrix[j][j],matrix[side-j][side-j]);
            swap(matrix[j][j],matrix[side-j][j]);
            for(int i=1;side-2*j>i;i++)
            {
                swap(matrix[j][i+j],matrix[i+j][side-j]);
                swap(matrix[j][i+j],matrix[side-j][side-i-j]);
                swap(matrix[j][i+j],matrix[side-i-j][j]);
            }
            j++;
        }
    }
};
