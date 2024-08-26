class Solution {
public:
    bool isPalindrome(int x) {
 
        const int max_int = 2147483647;
        const int min_int = -2147483648;

      
        if (x<0 || (x%10 == 0 && x!=0)) {
            return false;
        }
        
        int original = x;
        int reverse = 0;
        
        while (x!=0) {
            int rem =x%10;
            

            if (reverse>(max_int-rem)/10) {
                return false; 
            }
            
            reverse=reverse*10+rem;
            x/=10;
        }
        
        return reverse==original;
    }
};
