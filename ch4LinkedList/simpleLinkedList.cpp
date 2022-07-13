#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    int Data;
    NODE *Link;
};
int length(struct NODE *);
void traversal(struct NODE *);
void insert(struct NODE *, int, int);
int main()
{
    NODE *head = new NODE();
    NODE *secondNode = new NODE();
    head->Data = 1;
    head->Link = secondNode;

    secondNode->Data = 4;
    secondNode->Link = NULL;
    while (1)
    {
        printf("please choose operation in number:\n");
        printf("1:return Linked List length\n");
        printf("2:Traversal Linked List \n");
        printf("3:Insert element to Linked List \n");

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
        else if (op == 3)
        {
            int index = 0;
            int data = 0;
            printf("select No. of Node:\n");
            scanf("%d", &index);
            printf("enter data you want to insert:\n");
            scanf("%d", &data);
            insert(head, index, data);
        }
        else if (op == 0)
        {
            break;
        }
        else
        {
            printf("please choose again");
        }
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
        printf("No.%d -> %d\n", count, p->Data);
        p = p->Link;
    }
    return;
}

void insert(struct NODE *linkedlist, int index, int data)
{
    if (index > length(linkedlist) || index <= 0)
    {
        printf("invalid index\n");
        return;
    }
    NODE *newNode = new NODE();
    newNode->Data = data;
    NODE *p = linkedlist;
    while (--index)
    {
        p = p->Link; // move to index element
    }
    newNode->Link = p->Link;
    p->Link = newNode;
    printf("insert complete!\n");
    return;
}
