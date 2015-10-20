/***
 * @author: locshade
 * @time  : 2015/10/17
 *
 ***/

/************************************
 The question description:
There are two sorted arrays nums1 and nums2 of size m and n respectively. Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
*************************************/

/*********************************
The answer description:
the key idea is below,but more details should be concerned
for i =1 to (num1+num2)/2:
	if nums1 <= nums2:
		ans = nums1[i1++]
	else:
		ans = nums2[i2++]



**********************************/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
		int po1=0,po2=0,flag=0;
		if((nums1.size()+nums2.size())%2 == 0)
			flag =1;
		int dead=(nums1.size() + nums2.size())/2 +1;
		if(!flag)
		{
		if(nums1.size() == 0) return nums2[dead-1];
		if(nums2.size() == 0) return nums1[dead-1];
		}
		else
		{
			if(nums1.size() == 0) return (double)(nums2[dead-1]+nums2[dead-2])/2;
			if(nums2.size() == 0) return (double)(nums1[dead-1]+nums1[dead-2])/2;
		}
		double temp;
		while(dead--)
		{
			if( po2>=nums2.size() ||  nums1[po1] <= nums2[po2] && po1<=nums1.size()-1)
				{
					temp = ans;
					ans = nums1[po1++];
				}
			else
				{
				temp = ans;
				ans = nums2[po2++];
				}
		}
		if(flag)
			return (ans+temp)/2;
		else 
			return ans;
    }
};
