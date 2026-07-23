/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if(head == NULL)
        return NULL;

    struct ListNode *it = head;

    for(int i = 0; i < n; i++)
        it = it->next;

    if(it == NULL)
    {
        struct ListNode *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct ListNode *prev = NULL;
    struct ListNode *current = head;

    while(it != NULL)
    {
        prev = current;
        current = current->next;
        it = it->next;
    }

    prev->next = current->next;
    free(current);

    return head;
}