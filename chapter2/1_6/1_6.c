#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
  int data;
  struct LNode *next;
}LNode;


p指向列表第一个节点，q指向p下一个节点，若p与q的data中的值相等则删除q所指
节点，q指向下一个节点，若不相等，p指向q，q指向下一个节点
