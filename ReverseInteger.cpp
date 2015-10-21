/***
 * @author: locshade
 * @time  : 2015/10/21
 ***/

/************************************
 The question description:
 Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321
 
*************************************/

/*********************************
The answer description:
The solution is not very hard, Just a loop is ok

note: The range of the output should be checked, to tell if 
the output is overflow

**********************************/
#define int_max 2147483647
#define int_min -2147483648
class Solution {
public:
    int reverse(int x) {
		int result=0,flag=0;
		int powers=1,temp;
		while(x!=0)
		{
			temp = x % 10;
			x /= 10;
			if(result > int_max/10 || result < int_min/10 )
				return 0;
			result *=10;
			result += temp;
		}
		return result;
    }
};







