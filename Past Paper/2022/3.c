//
// Created by 1 on 2023/12/6.
// 删除list表中大于min小于max的结点
//

// list 表结构可能如下： data next
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode, *LinkList;
// 题目的另外的意思就是：只保留 min 和 max 结点，其他的全部断开
# include <stdio.h>
LinkList getMinMax(LinkList root) {
    LinkList min = root, max = root;
    while(root) {
        if(root->data < min->data) min = root;
        if(root->data > max->data) min = root;
        root = root->next;
    }
    min->next = max;
    max->next = NULL;
    return min;
}
