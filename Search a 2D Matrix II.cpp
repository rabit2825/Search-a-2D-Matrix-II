class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowI = 0;
        int colI = col-1;

        while(rowI < row && colI >= 0){
            int element = matrix[rowI][colI];
            if(element == target){
                return 1;
            }
            if(element < target){
                rowI ++;
            }
            else{
                colI--;
            }
        }
        return 0;
        
    }
};