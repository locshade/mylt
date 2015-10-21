/***
 * @author: locshade
 * @time  : 2015/10/21
 ***/

/************************************
 The question description:
Given a string, find the length of the longest substring without repeating characters. For example, the longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3. For "bbbbb" the longest substring is "b", with the length of 1. 
*************************************/

/*********************************
The answer description:
The solution is simple,Just use a map to store the index ,
and a int to store the longest length 


**********************************/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		map<char,int>  m;
		int result=0;
		int lastposition = -1;
		for(int i=0; i<s.size(); i++)
		{
			if(m.find( s[i]) != m.end() && m[s[i]] >lastposition )
			{
				lastposition = m[s[i]];
			}
			if(result < (i-lastposition)) result = (i-lastposition);
			m[s[i]] = i; 
		}
		return result;
    }
};




