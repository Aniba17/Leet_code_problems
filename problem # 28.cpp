class Solution {
public:
    int strStr(string haystack, string needle) {
 
    string res = "";
    int j = 0;
    int index = -1;
    bool check = false;
    int i = 0;
    int k = 0;
    
    do {
        if (needle[j] == haystack[i]) {
            res =res+ needle[j];
            if (j == 0) { 
                index = i;
            }
            i++;
            j++;
            k++;
        } else {
            if (j > 0) { 
                i = index + 1;  
                res = "";
                j = 0;
                k = i; 
            } else {
                i++;
                k++;
            }
            index = -1; 
        }

        if (res == needle) {
            check = true;
            break;
        }

    } while (k < haystack.size());

    if (check) {
       return index;
    } else {
       return -1;
    }


    }
       
    
};