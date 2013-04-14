/*Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321*/

class Solution {
public:
    int reverse(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        //int isneg = 0;// A negative flag is not actually needed
        int res = 0;
  	//when x == 0
		if(!x) return x;
		//when x is negative
		/*if(x < 0) {
			isneg = 1;
			x = -x;
		}*/
		//reverse the integer
		while(x){
			res = 10*res + x%10;
			x /= 10;
		}
        //return (isneg==0)? res: -res;
        return x;
    }
};
