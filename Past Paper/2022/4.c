//
// Created by 1 on 2023/12/6.
// 调换队列所有元素顺序，队头变成队尾
//

// 队列结构如下：
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode, *LinkList;

# include <stdio.h>

LinkList reverseList(LinkList root) {
    LinkList pre = NULL;
    LinkList cur = root;
    LinkList next = NULL;
    while(cur)
    {
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    return pre;
}
