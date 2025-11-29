#include <iostream>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;

        ListNode *temp = node->next;
        node->next = node->next->next;
        delete temp;
    }
};

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

void printList(ListNode *head)
{
    while (head)
    {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main()
{
    Solution s1;

    std::vector<int> a = {4, 5, 1, 9};

    ListNode *l1 = build(a);

    printList(l1);

    s1.deleteNode(l1->next);

    printList(l1);

    return 0;
}