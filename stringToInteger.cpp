/***
 * @author: locshade
 * @time  : 2015/10/17
 ***/

/************************************
 The question description:
Implement atoi to convert a string to an integer.

Hint: Carefully consider all possible input cases. If you want a challenge, please do not see below and ask yourself what are the possible input cases.

Notes: It is intended for this problem to be specified vaguely (ie, no given input specs). You are responsible to gather all the input requirements up front.

Update (2015-02-10):
The signature of the C++ function had been updated. If you still see your function signature accepts a const char * argument, please click the reload button  to reset your code definition. 
*************************************/

/*********************************
The answer description:

	The place where should be carefully concerned are below:
		1: if it is null
		2: if it is negative
		3: how the string is stored
		4: The range of the int
		5: if the number is valid,such as +-2 is not a valid number,should return 0;


**********************************/
#define INT_MIN     (-2147483647 - 1)
#define INT_MAX      2147483647

class Solution {
public:
  int myAtoi(string str) {
		int result = 0;
		bool neg = false;

		if(str.length() == 0 )
			return 0;

		int i=0;
		while(str[i]==' ') i++;
		if(str[i]=='-' || str[i] == '+')
		{
			if(str[i]=='-') neg = true;
			i++;
		}
		

		for(;i<str.length();i++)
		{
			if(str[i]<'0' || str[i]>'9') break;
			if(neg)
			{
				if(-result <(INT_MIN+str[i]-'0')/10)
					return INT_MIN;
			}
			else
			{
				if(result > (INT_MAX-str[i]-'0')/10)
					return INT_MAX;
			}
			result *=10;
			result += (str[i]-'0');
		}
		if(neg) result = -result;
		return result;

    } 
};

