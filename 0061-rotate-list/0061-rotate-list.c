/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head==NULL||k==0)
        return head;
    int length=0;
    struct ListNode* it=head;
    while(it!=NULL)
    {
        length++;
        it=it->next;
    }
    it=head;
    k=k%length;
    if(k==0)
        return head;
    struct ListNode* prev=head;
    struct ListNode* curr=head->next;
    while(k>0)
    {
        k--;
        it=it->next;
    }
    while(it->next!=NULL)
    {
        prev=curr;
        curr=curr->next;
        it=it->next;
    }
    it->next=head;
    prev->next=NULL;
    head=curr;
    return head;
}