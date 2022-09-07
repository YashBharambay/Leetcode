class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int>> r(numRows);

//         Traverse for N rows
        for (int i = 0; i < numRows; i++) {
            
//             Rows and Columns are equal so resizing
            r[i].resize(i + 1);
            
//             Every row's first and last element is 1
            r[i][0] = r[i][i] = 1;
  
//             Traversing to columns
            for (int j = 1; j < i; j++)
                
//              New element by addition of elements from previous rows   
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
        
        return r;
    }
};
