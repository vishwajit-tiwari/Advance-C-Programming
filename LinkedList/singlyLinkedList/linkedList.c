
#include "linkedList.h"

#define TRUE 1

// first we need to take value
// then we need to mark end of Node so we will assign NULL to next

struct Node
{
    int data;
    struct Node* link;
};

enum ELinkedList 
{
    eInsertNode = 1,
    eDisplay,
    eExit
};

typedef struct Node Node;
// global scope variable
Node *Head = NULL;

// insert node atb end
void insertNodeAtEned(int num)
{
    Node *nodePtr = NULL;
    Node *temp = NULL;
    
    // allocate memory to newly created node
    nodePtr = (Node*)malloc(sizeof(Node));
    
    nodePtr->data = num;
    nodePtr->link = NULL;
    
   
    if(Head != NULL)
    {
        temp = Head;
        
        while(temp->link != NULL)
        {
            temp = temp->link;
        }
        
        temp->link = nodePtr;
        
    }
    else
    {
       Head = nodePtr; 
    }
}

void displayLinkedList(Node *HeadNode)
{
    Node * temp = NULL;
    temp = HeadNode;
    
    printf("LinkedList : ");
    
    // display
    while(temp != NULL)
    {
        printf("%d->", temp->data);
        
        temp = temp->link;
    }
    printf("\n");
}

int main()
{
    int num, usrChoice;
    
    while(TRUE)
    {
       printf("Please choose from following operations:\n");
       printf("1.InsertNode\n2.displayLinkedList\n3.Exit\n");
       scanf("%d", &usrChoice);
    
       switch(usrChoice)
       {
           case eInsertNode:
                printf("Enter a number: ");
                scanf("%d", &num);
                insertNodeAtEned(num);
                break;
        
           case eDisplay:
                displayLinkedList(Head);
                break;
        
           case eExit:
                exit(0);
        
           default:
                printf("Incorrect choice!! Please choose from given options\n");
                break;
       }
    }
    
    return 0;
}