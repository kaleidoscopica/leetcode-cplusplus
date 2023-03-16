/* 13. Roman to Integer
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer. */

class Solution 
{
public:
    int romanToInt(string s) 
    {
        int integer;
        int length = s.length();
        int total = 0;
        
        for (int c=0; c < length; c++)
        {
            // First evaluate chars one by one
            if (s[c] == 'I')
            {
                total += 1;
            }
            else if (s[c] == 'V')
            {
                total += 5;
            }
            else if (s[c] == 'X')
            {
                total += 10;
            }
            else if (s[c] == 'L')
            {
                total += 50;
            }
            else if (s[c] == 'C')
            {
                total += 100;
            }
            else if (s[c] == 'D')
            {
                total += 500;
            }
            else if (s[c] == 'M')
            {
                total += 1000;
            }
            
            // When not at first char in string, also see what preceding char was, and possibly adjust
            if (c > 0)
            {
                // If IV (4), subtract 2 
                if ((s[c] == 'V') && (s[c-1] == 'I'))
                {
                    total -= 2;
                }
                // If IX (9), subtract 2
                else if ((s[c] == 'X') && (s[c-1] == 'I'))
                {
                    total -= 2;
                }
                // If XL (40), subtract 20
                else if ((s[c] == 'L') && (s[c-1] == 'X'))
                {
                    total -= 20;
                }
                // If XC (90), subtract 20
                else if ((s[c] == 'C') && (s[c-1] == 'X'))
                {
                    total -= 20;
                }
                // If CD (400), subtract 200
                else if ((s[c] == 'D') && (s[c-1] == 'C'))
                {
                    total -= 200;
                }
                // If CM (900), subtract 200
                else if ((s[c] == 'M') && (s[c-1] == 'C'))
                {
                    total -= 200;
                }
            }
        }
        
        return total;
    }
};
