
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (!list1)
        {
            return list2;
        }
        if (!list2)
        {
            return list1;
        }

        ListNode *head = new ListNode();
        ListNode *temp = new ListNode();
        if (list1->val < list2->val)
        {
            temp = list1;
            list1 = list1->next;
        }
        else
        {
            temp = list2;
            list2 = list2->next;
        }
        head = temp;
        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                temp->next = list1;
                list1 = list1->next;
            }
            else
            {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        if (list1)
        {
            temp->next = list1;
        }
        else
        {
            temp->next = list2;
        }

        return head;
    }
};