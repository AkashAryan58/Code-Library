
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        ListNode *prev, *curr, *temp;

        if (head == nullptr)
            return head;
        if (head->next == nullptr)
            return head;
        prev = nullptr;
        curr = head;
        while (curr)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};