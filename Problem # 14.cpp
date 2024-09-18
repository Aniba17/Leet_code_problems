class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
  
    string res = "";
    int k = 0;
    bool check = true;
    int j = 0;
    


    while (k < strs[0].size()&& check) {
        int i = 0;
       
        
        while (i < strs.size()-1) {
            if (strs[i][j] == strs[i + 1][j]) {
            
                i++;
            } else {
              
                check = false;
                break;
            }
        }

        if (check) {
           
            res = res + strs[0][j];
        }else
        break;

        j++; 
        k++;
    }

    return res; 
    }
};