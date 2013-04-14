/*
Determine whether an integer is a palindrome. Do this without extra space.

Some hints:
Could negative integers be palindromes? (ie, -1)

If you are thinking of converting the integer to string, note the restriction of using extra space.

You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", you know that the reversed integer might overflow. How would you handle such case?

There is a more generic way of solving this problem.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!x) return true;
        if(x<0) return false;
        int rev = 0;
        int x0 = x;
        while(x){
            rev *= 10;
            rev += x%10;
            x /= 10;
        }
        if (rev == x0) return true;
        else return false;
    }
};
