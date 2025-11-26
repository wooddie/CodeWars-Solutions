#include <iostream>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode dum(0);
        ListNode *tail = &dum;

        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                tail->next = list1;
                list1 = list1->next;
            }
            else
            {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        tail->next = list1 ? list1 : list2;

        return dum.next;
    }
};

void printList(ListNode *head)
{
    ListNode *cur = head;
    while (cur)
    {
        std::cout << cur->val << " ";
        cur = cur->next;
    }
    std::cout << std::endl;
}

ListNode *build(const std::vector<int> &v)
{
    if (v.empty())
        return nullptr;

    ListNode *head = new ListNode(v[0]);
    ListNode *cur = head;

    for (int i = 1; i < v.size(); ++i)
    {
        cur->next = new ListNode(v[i]);
        cur = cur->next;
    }
    return head;
}

int main()
{
    Solution s1;

    std::vector<int> a = {1, 2, 4};
    std::vector<int> b = {1, 3, 4};

    ListNode *l1 = build(a);
    ListNode *l2 = build(b);

    ListNode *merged = s1.mergeTwoLists(l1, l2);

    printList(merged);

    return 0;
}