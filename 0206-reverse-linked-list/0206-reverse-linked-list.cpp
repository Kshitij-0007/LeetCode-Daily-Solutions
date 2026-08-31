/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* p=head;
        ListNode* q=NULL;
        ListNode* temp=NULL;
        while(p!=NULL)
        {
            temp=p->next;
            p->next=q;
            q=p;
            p=temp;
        }
        return q;
    }
};