/***
 * @author: locshade
 * @time  : 2015/10/22
 ***/

/************************************
 The question description:
 The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number of rows:

string convert(string text, int nRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".
 
*************************************/

/*********************************
The answer description:

The demo is not good, should go to web to get a detail description of this question.

The solution is just use the direct method,go 0.0+k....1,1+k....2,2+k,...

**********************************/

class Solution {
public:
    string convert(string s, int numRows) {
		if(numRows <=1 || s.size() <=numRows) return s;
		vector<string> nrows(numRows);
		int step = 1;
		int row = 0;
		for(int i=0;i<s.size();i++)
		{
			if(row == numRows-1) step = -1;
			if(row == 0) step = 1;
			nrows[row] += s[i];
			row +=step;
		}
		string result;
		for(int i=0;i<numRows;i++)
			result += nrows[i];
		return result;
    }
};
