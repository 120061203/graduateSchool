#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    int Data;
    NODE *Link;
};
int length(struct NODE *);
void traversal(struct NODE *);
int main()
{
    NODE *head = new NODE();
    NODE *secondNode = new NODE();
    head->Data = 1;
    head->Link = secondNode;

    secondNode->Data = 2;
    secondNode->Link = NULL;

    printf("please choose operation in number:\n");
    printf("1:return Linked List length\n");
    printf("2:Traversal Linked List \n");

    int op = 0;
    scanf("%d", &op);
    if (op == 1)
    {
        int len = length(head);
        printf("current length is : %d", len);
    }
    else if (op == 2)
    {
        traversal(head);
    }
    else
    {
        printf("please choose again");
    }

    return 0;
    system("PAUSE");
}
int length(struct NODE *linkedlist)
{
    int count = 0;
    NODE *p = linkedlist;
    while (p != NULL)
    {
        count++;
        p = p->Link;
    }
    return count;
}

void traversal(struct NODE *linkedlist)
{
    NODE *p = linkedlist;
    int count = 0;
    while (p != NULL)
    {
        count++;
        printf("%d:%d\n", count, p->Data);
        p = p->Link;
    }
}
