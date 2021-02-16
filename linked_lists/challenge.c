#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *nextPtr; //self-referential structure
} node_t;
typedef node_t *ListNodePtr;
void insert(ListNodePtr *head, int value);
void insertAtEnd(ListNodePtr *head, int value);
void insertAtBeginning(ListNodePtr *head, int value);
int delete (ListNodePtr *head, int value);
void deleteAtBeginning(ListNodePtr *head);
int isEmpty(ListNodePtr head);
void printList(ListNodePtr currentPtr);

int main()
{
    ListNodePtr head = NULL;
    int choice = 0;
    int item;
    while (choice != 7)
    {
        printf("What would you like to do?\n1. insert an element\n2. insert an element at the end.\n3. insert an element at the beginning."
               "\n4. delete an element\n5. delete the first element.\n6. see the list\n7. exit\n");
        scanf("%d", &choice);
        fflush(stdin);
        switch (choice)
        {
        case 1:
            printf("Enter the integer:\n");
            scanf("%d", &item);
            insert(&head, item);
            printList(head);
            break;
        case 2:
            printf("Enter the integer:\n");
            scanf("%d", &item);
            insertAtEnd(&head, item);
            printList(head);
            break;
        case 3:
            printf("Enter the integer:\n");
            scanf("%d", &item);
            insertAtBeginning(&head, item);
            printList(head);
            break;
        case 4:
            if(!isEmpty(head))
            {
                printf("Enter the integer:\n");
                scanf("%d", &item);
                if(delete(&head, item))
                {
                    printf("%d deleted.\n",item);
                    printList(head);
                }
                else
                {
                    printf("%d not found.\n",item);
                }
            }
            break;
        case 5:
            if(!isEmpty(head))
            {
                deleteAtBeginning(&head);
                printList(head);
            }
            break;
        case 6:
            printList(head);
            break;
        case 7:
            printf("Goodbye!\n");
            break;
        default:
            printf("invalid selection.\n");
            break;
        }
    }
    return 0;
}
void insertAtBeginning(ListNodePtr *head, int val)
{
    ListNodePtr new_node = malloc(sizeof(node_t));
        new_node-> data = val;
        new_node-> nextPtr = *head;
        *head = new_node;
}
void insertAtEnd(ListNodePtr *head, int val)
{
    ListNodePtr current = *head;
    if (current!=NULL){
        while (current->nextPtr!=NULL)
        {
            current=current->nextPtr;
        }
        current -> nextPtr = malloc(sizeof(node_t));
        current->nextPtr->data=val;
        current->nextPtr->nextPtr=NULL;
    }
    else
    {
        current = malloc(sizeof(node_t));
        current->data=val;
        current->nextPtr=NULL;
        *head = current;
    }
}
void insert(ListNodePtr *head, int val)
{
    ListNodePtr newPtr;
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
    newPtr=malloc(sizeof(node_t));
    if(newPtr!=NULL) // space is available
    {
        newPtr->data = val;
        newPtr->nextPtr=NULL;
        previousPtr=NULL;
        currentPtr=*head;
        while(currentPtr!=NULL&&val>currentPtr->data)
        {
            previousPtr=currentPtr;
            currentPtr= currentPtr->nextPtr;
        }
        if (previousPtr==NULL)
        {
            newPtr->nextPtr=*head;
            *head = newPtr;
        }
        else
        {
            previousPtr->nextPtr=newPtr;
            newPtr->nextPtr=currentPtr;
        }
    }
    else
    {
        printf("%d was not inserted. No memory was available.\n",val);
    }
}
void deleteAtBeginning(ListNodePtr *head)
{
    ListNodePtr tempPtr=NULL;
    if (head==NULL)
    {
        return;
    }
    else {
        tempPtr = *head;
        *head = (*head) ->nextPtr;
        free(tempPtr);
    }
}
int delete (ListNodePtr *head, int value)
{
    ListNodePtr tempPtr;
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
    if(value == (*head)->data)
    {
        tempPtr = *head;
        *head = (*head)->nextPtr;
        free(tempPtr);
        return value;
    }
    else
    {
        previousPtr=*head;
        currentPtr= (*head)->nextPtr;
        while(currentPtr!=NULL&&currentPtr->data!=value)
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }
        if(currentPtr!=NULL)
        {
            tempPtr=currentPtr;
            previousPtr->nextPtr=currentPtr->nextPtr;
            free (tempPtr);
            return value;
        }
    }
    return '\0';
}
void printList(ListNodePtr currentPtr)
{
    if(currentPtr==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        printf("list is:\n");
        while (currentPtr!=NULL)
        {
            printf("%d-->", currentPtr->data);
            currentPtr=currentPtr->nextPtr;
        }
        printf("NULL\n");
    }
}
int isEmpty(ListNodePtr head)
{
    return head==NULL;
}