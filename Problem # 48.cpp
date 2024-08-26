class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       
for (int i = 0; i < matrix.size()/2; i++) {
        for (int j = 0; j < matrix.size(); j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[matrix.size()-i-1][j];
            matrix[matrix.size()-i-1][j] = temp;
        }
    }
    
    
    
   
int    m=matrix.size();
for (int i = 0; i < matrix.size(); i++) {
            for(int j=0; j<m; j++){
            	
            int temp = matrix[i][j+i];
            matrix[i][j+i] = matrix[i+j][i];
            matrix[i+j][i] = temp;
            
        }m--;
}
     

    }
};