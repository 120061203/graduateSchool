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
void deleteNode(struct NODE *, int);
NODE *head = new NODE();
NODE *secondNode = new NODE();

int main()
{
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
        printf("4:Delete element from Linked List \n");

        int op = 0;
        int index = 0;
        scanf("%d", &op);
        if (op == 1)
        {
            int len = length(head);
            printf("current length is : %d\n\n", len);
        }
        else if (op == 2)
        {
            traversal(head);
        }
        else if (op == 3)
        {

            int data = 0;
            printf("select No. of Node:\n");
            scanf("%d", &index);
            printf("enter data you want to insert:\n");
            scanf("%d", &data);
            insert(head, index, data);
        }
        else if (op == 4)
        {
            printf("select No. of Node you want to delete:\n");
            scanf("%d", &index);
            deleteNode(head, index);
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
    puts("");
    return count;
}

void traversal(struct NODE *linkedlist)
{
    NODE *p = linkedlist;
    int count = 0;
    if (length(linkedlist) == 0)
    {
        printf("empty Linked list!\n\n");
    }
    while (p != NULL)
    {
        count++;
        printf("No.%d -> %d\n", count, p->Data);
        p = p->Link;
    }
    puts("");
    return;
}

void insert(struct NODE *linkedlist, int index, int data)
{
    if (index > length(linkedlist) || index < 0)
    {
        printf("invalid index\n");
        return;
    }
    NODE *newNode = new NODE();
    newNode->Data = data;
    NODE *p = linkedlist;
    if (index == 0)
    {
        printf("create new linked list complete \n\n");
        head = newNode;
        return;
    }
    while (--index)
    {
        p = p->Link; // move to index element
    }
    newNode->Link = p->Link;
    p->Link = newNode;
    printf("insert complete!\n");
    puts("");
    return;
}
void deleteNode(struct NODE *linkedlist, int index)
{

    NODE *current = linkedlist;  // the node which want to delete
    NODE *previous = linkedlist; // the previous node which want to delete
    if (index > length(linkedlist) || index <= 0)
    {
        printf("invalid index\n");
        return;
    }
    if (index == 1)
    { // case1: delete head node

        linkedlist = current->Link;
        delete previous;
        head = linkedlist;
        printf("delete head node complete\n\n");
    }
    else
    {
        int originIndex = index;
        while (--index)
        {
            printf("move to current node index: %d\n", index);
            current = current->Link; // move to index node
        }
        index = originIndex - 1;
        while (--index)
        {
            printf("move to previous node index: %d\n", index);
            previous = previous->Link; //  move to previous node of index nodex
        }
        if (current->Link == NULL)
        {
            // case2:delete tail node
            previous->Link = NULL;
            delete current;
            printf("delete tail node complete\n\n");
        }
        else
        {
            // case3:delete node not head or tail
            previous->Link = current->Link;
            delete current;
            printf("delete No.%d node complete\n\n", originIndex);
        }
    }
    return;
}
