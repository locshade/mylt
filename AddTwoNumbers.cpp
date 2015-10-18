/***
 * @author:locshade
 * @time  :2015/10/18
 * @link  :https://leetcode.com/problems/add-two-numbers/
 *
 * **/

/*******************************************
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
********************************************/


/*****
This question is not hard, just go pass the two list and add them.
*****/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int x,y,overflow=0,sum;
		
		ListNode *result = NULL;
		LIstNode **t =&result;

		while(l1!=NULL ||l2!=NULL)
		{
			x = getValue(l1);
			y = getValue(l2);
			sum = overflow + x +y;
			
			ListNode *node = new ListNode(sum%10);
			*t = node;
			t = (&node->next);
			overflow = sum /10;
		}
		if(overflow > 0)
		{
			ListNode *node = new ListNode(carry%10);
			*t = node;
		}
		return result;		
    }
	int getValue(ListNode*&l)
	{
		int x=0;
		if(l !=NULL)
		{
			x = l->val;
			l = l->next;
		}
		return x;
	}
};







