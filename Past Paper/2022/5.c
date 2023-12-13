//
// Created by 1 on 2023/12/7.
// 先序遍历，求所有叶子节点到根节点的路径
//

// 二叉树的结构如下：
typedef struct BTNode {
    int data;
    int path;  // 记录带权路径长
    struct TNode *lchild, *rchild;
}BTNode, *BiTree;
// 树的结构如下：
typedef struct TNode {
    int data;
    int path;
    struct TNode *child[100];
}TNode, *Tree;


# include <stdio.h>
int main(){
    // 1 2 2 3 3 3 5 4 2 6
    int arr[] = {1, 2, 2, 3, 3, 3, 5, 4, 2, 6};
    int a[10][sizeof (arr) / sizeof (arr[0])] = {0};  // 存储最终答案
    int b[10] = {0};  // 记录各队列长度
    for(int i = 0; i < sizeof (arr) / sizeof (arr[0]); i++) {
        for(int j = 0; j < 10; j++) {
            if(b[j] == 0) {
                a[j][b[j]] = arr[i];
                b[j]++;
                break;
            }
            if(a[j][b[j] - 1] >= arr[i]) continue; // *
            else {
                a[j][b[j]] = arr[i];
                b[j]++;
                break;
            }
        }
    }
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < b[i]; j++) {
            if(a[i][j] != 0)
                printf("%d " , a[i][j]);
        }
        printf("\n");
    }
}
