/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 struct ListNode {
     int val;
     struct ListNode *next;
 };


#include <stdio.h>

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    //while neither l1 or l2 are null, repeat
    //if one of l1 or l2 are null, treat as 0
    //add and carry if nonzero

    int carry = 0;

    struct ListNode* l3 = malloc(sizeof(struct ListNode));
    l3->val = l1->val + l2->val;
    l3->next = NULL;

    while(l1 != NULL || l2 != NULL || carry != 0)
    {
        l3->next = malloc(sizeof(struct ListNode));
        l3 = l3->next;

        int num1, num2;
        if(l1 == NULL)
        {
            num1 = 0;
        }
        else
        {
            num1 = l1->val;
        }

        if(l2 == NULL)
        {
            num2 = 0;
        }
        else
        {
            num2 = l2->val;
        }

        l3->val = (num1 + num2 + carry) % 10;
        carry = (num1 + num2 + carry)/10;
        l3->next = NULL;
    }

    return l3;

}