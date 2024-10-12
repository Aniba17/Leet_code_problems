class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
         if (matrix.empty() || matrix[0].empty()) {
            return result;
        }

        int x = matrix.size();
        int y= matrix[0].size();
       

	int m=y-1;
	int n=x-1;
	int temp=0;
	int i=0,j=0;
	int sq =x*y;
	int count =0;
	while(count<sq){
	     for ( j=temp;j<=m&&count<sq;j++){
                    
                  result.push_back(matrix[i][j]);
               
                  count++;
              
         
	     }j--;
	     cout<<endl;
	     for( i=temp+1; i<=n&&count<sq;i++){
	         result.push_back(matrix[i][j]);
	          count++;
                 
                    
	     }
	     i--;
	   
	     j--;
	     while(j>=temp&&count<sq){
	          result.push_back(matrix[i][j]);
	          
	           count++;
	          j--;
	     }j++;
	    
	     temp++;
	    
	    i--;
	      while(i>=temp&&count<sq){
	         result.push_back(matrix[i][j]);
	          
	           count++;
	       
	          i--;
	     }i++;
	   
    	m--;  
    	n--;
	}
return result;
    }
};