/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(head==NULL||head->next==NULL)
        return head;
    struct ListNode* p=head;
    struct ListNode* q=NULL;
    struct ListNode* temp=NULL;
    while(p!=NULL)
    {
        temp=p->next;
        p->next=q;
        q=p;
        p=temp;
    }
    return q;
}