#include <iostream>

struct node
{
    node *lch, *rch;
    int val;
};

node *set(int num)
{
    node *tmp = new node();
    tmp->lch = NULL;
    tmp->rch = NULL;
    tmp->val = num;
    return tmp;
}

void add(node *head, int num)
{
    if (head == NULL)
        return;
    if (head->val >= num)
    {
        if (head->lch == NULL)
            head->lch = set(num);
        else
            add(head->lch, num);
    }
    else
    {
        if (head->rch == NULL)
            head->rch = set(num);
        else
            add(head->rch, num);
    }
}

void show(node *head)
{
    if (head == NULL)
        return;
    show(head->lch);
    std::cout << head->val << ", ";
    show(head->rch);
}

int main()
{
    node *head = set(50);
    int val = 1;
    while (val)
    {
        std::cout << "enter value : ";
        std::cin >> val;
        if (val == 1000)
        {
            show(head);
            std::cout << std::endl;
        }
        else
            add(head, val);
    }
    return 0;
}