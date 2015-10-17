/***
 * @author: locshade
 * @time  : 2015/10/17
 * @link  : https://leetcode.com/problems/two-sum/
 *
 ***/

/************************************
 The question description:
 Given an array of integers, find two numbers such that they add up to a specific target number.The functiontwoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2
*************************************/

/*********************************
The answer description
for i=1:n in numbers
	if target-numbers[i] not exists in map<value,index>
		target - numbers[i] added into the map
	else
		map[target-nymbers[i] ] added into the result vector
		i added into the result vector


**********************************/




class Solution
{
public:
	vector<int> twoSum(vector<int>& nums,int target)
	{
		map<int,int> mynum;
		vector<int> result;
		for(int i=0; i < nums.size(); i++)
		{
			if(mynum.find(target-nums[i]) == mynum.end() )
			{
				mynum[nums[i]] = i;
			}
			else
			{
				result.push_back(mynum[target-nums[i]]+1);
				result.push_back(i+1);
			}
		}
		return result;		
	}
};
