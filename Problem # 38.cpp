class Solution {
public:
    string countAndSay(int n) {
       
    string s = "1";
    int count = 1; 
      string news = "";
    int i;
    int j = 0;
    bool check = false;

    while(j != n-1) { 
        news = ""; 
        check = false; 

        for(i = 1; i < s.length(); i++) { 
            if(s[i] == s[i-1]) {
                count++;
            } else {
                news += to_string(count) + s[i-1];
                count = 1; 
            }
        }
        news += to_string(count) + s[s.length()-1];
        s = news;  
        count = 1; 
       
        j++;
    }
return s;
    

    }
    
};