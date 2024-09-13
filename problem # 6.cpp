
class Solution {
public:
    string convert(string s, int numRows) {
       
        if (numRows == 1) return s;
        
        
        int f = s.length();
        
        // Dynamically allocate arrays
        char** arr = new char*[1];      
        arr[0] = new char[f];
        char** sr = new char*[numRows];  
        for (int i = 0; i < numRows; ++i) {
            sr[i] = new char[f](); 
        }

       
        int index = 0;
        for (int j = 0; j < f; j++) {
            arr[0][j] = s[index++];
        }

     
        int j = 0, i = 0, m = 0;
        bool goingDown = false;  
        
        for (int k = 0; k < f; ++k) {
            sr[i][j] = arr[0][k];
            
            
            if (i == 0 || i == numRows - 1) {
                goingDown = !goingDown;
            }
            
           
            if (goingDown) {
                i++;  
            } else {
                i--;  
                j++;  
            }
        }

       
        string result;
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < f; j++) {
                if (sr[i][j] != 0) {  
                    result += sr[i][j];
                }
            }
        }

        // Deallocate memory
        delete[] arr[0];
        delete[] arr;
        for (int i = 0; i < numRows; ++i) {
            delete[] sr[i];
        }
        delete[] sr;

        return result;
    }
};
