class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>> matrix(n,vector<int>(n,0));

        int up=0;
        int down=n-1;
        int left=0;
        int right=n-1;
        int number=1;

        while(up<=down&&left<=right)
        {
            for(int i=left;i<=right;i++)
            {
                matrix[up][i]=number;
                number++;
            }
            up++;

            for(int i=up;i<=down;i++)
            {
                matrix[i][right]=number;
                number++;
            }
            right--;

            if(up<=down)
            {
                for(int i=right;i>=left;i--)
                {
                    matrix[down][i]=number;
                    number++;
                }
                down--;
            }

            if(left<=right)
            {
                for(int i=down;i>=up;i--)
                {
                    matrix[i][left]=number;
                    number++;
                }
                left++;
            }
        }
        return matrix;
    }
};
