class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         vector<vector<int>> matrix(n, vector<int>(n, 0));
 
        int sq=n*n;
        int m=n-1;
        int num=1;
        int j,i;
        i=0;
        int count=0;
        int temp=0;
        while(count<sq){
            
                for ( j=temp;j<=m;j++){
                    
                    matrix[i][j]=num++;
                    count++;
          
                }j=j-1;
                
                 for ( i=temp+1;i<=m;i++){
                    matrix[i][j]=num++;
                    count++;

                }i--;

                m--;
                if(i==j){
                    
                    j--;
                    while(j>=temp){
                        
                        matrix[i][j]=num++;
                        count++;
                       
                        j--;
                    }j++;
                }temp++;
                i--;
                while(i>=temp){
                   
                     matrix[i][j]=num++;
                     count++;
               
                      i--;
                }i++;

temp=j+1;
            
       }

        return matrix;
    }
};