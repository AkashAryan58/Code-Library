
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {

        vector<int> vect;
        ListNode *temp = head;
        while (temp)
        {
            vect.push_back(temp->val);
            temp = temp->next;
        }

        int i, j;
        if (vect.size() % 2 == 0)
        {
            i = (vect.size() / 2) - 1;
            j = (vect.size() / 2);
        }
        else
        {
            i = (vect.size() / 2) - 1;
            j = (vect.size() / 2) + 1;
        }

        while (i >= 0 && j < vect.size())
        {
            if (vect[i] != vect[j])
                return false;
            i--;
            j++;
        }
        return true;
    }
};