class Solution {
public:
    string intToRoman(int num) {
        
unordered_map<char, int> map;
	map['I']=1;
	map['V']=5;
	map['X']=10;
	map['L']=50;
	map['C']=100;
	map['D']=500;
	map['M']=1000;
 


     char arr[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    string res = ""; 
    int count = 0;
    int n1 = num;
    
 
    while (num / 10 != 0) {
        num = num / 10;
        count++;
    }

    int i = count;
    while (n1 != 0) {
        int power = pow(10, i); 
        int m = n1 / power; 
        n1 = n1 % power; 
        int multiply = power * m; 
        i--;
if (multiply == 4 || multiply == 9 || multiply == 40 || multiply == 90 || multiply == 400 || multiply == 900) {
    int z = multiply + power; // Example for cases like 4 -> IV, 9 -> IX, etc.
    string current = "", next = "";

    for (int i = 0; i < 7; i++) {
        char key = arr[i]; // 'key' should always be a string
        if (map.at(key) == power) {  // Proper key comparison for map
            current = key;
        }
        if (map.at(key) == z) {
            next = key;
        }
    }
    res = res + current + next; 

        } else {
           
            while (multiply != 0) {
                if (multiply >= map.at('M')) {
                    res = res + "M";
                    multiply = multiply - map.at('M');
                    continue;
                }
                if (multiply >= map.at('D')) {
                    res = res + "D";
                    multiply = multiply - map.at('D');
                    continue;
                }
                if (multiply >= map.at('C')) {
                    res = res + "C";
                    multiply = multiply - map.at('C');
                    continue;
                }
                if (multiply >= map.at('L')) {
                    res = res + "L";
                    multiply = multiply - map.at('L');
                    continue;
                }
                if (multiply >= map.at('X')) {
                    res = res + "X";
                    multiply = multiply - map.at('X');
                    continue;
                }
                if (multiply >= map.at('V')) {
                    res = res + "V";
                    multiply = multiply - map.at('V');
                    continue;
                }
                if (multiply >= map.at('I')) {
                    res = res + "I";
                    multiply = multiply - map.at('I');
                    continue;
                }
            }
        }
    }

    return res;

    }
    };