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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode dum(INT_MIN);
        ListNode *tail = &dum;

        while (head)
        {
            if (head->val == tail->val)
            {
                head = head->next;
            }
            else
            {
                ListNode *nextNode = head->next;
                tail->next = head;
                tail = tail->next;
                tail->next = nullptr;
                head = nextNode;
            }
            if (tail->next != nullptr)
                tail = tail->next;
        }

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

    std::vector<int> a = {1, 1, 2};

    ListNode *l1 = build(a);

    ListNode *merged = s1.deleteDuplicates(l1);

    printList(merged);

    a = {1, 1, 2, 3, 3};

    l1 = build(a);

    merged = s1.deleteDuplicates(l1);

    printList(merged);

    return 0;
}