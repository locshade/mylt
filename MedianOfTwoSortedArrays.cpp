/***
 * @author: locshade
 * @time  : 2015/10/17
 * @link  : https://leetcode.com/problems/two-sum/
 *
 ***/

/************************************
 The question description:
There are two sorted arrays nums1 and nums2 of size m and n respectively. Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
*************************************/

/*********************************
The answer description:
for i =1 to (num1+num2)/2:
	if nums1 <= nums2:
		ans = nums1[i1++]
	else:
		ans = nums2[i2++]

**********************************/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int ans;
		int po1=0,po2=0;
		int dead=(nums1.size() + nums2.size())/2;
		if(nums1.size() == 0) return nums2[nums2.size()/2];
		if(nums2.size() == 0) return nums1[nums1.size()/2];
		while(dead--)
		{
			if( po2>=nums2.size() ||  nums1[po1] <= nums2[po2] && po1<=nums1.size()-1)
				ans = nums1[po1++];
			else
				ans = nums2[po2++];
		}
		return (double)ans;
    }
};
