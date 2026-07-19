// Problem: Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (first list)
// - Third line: integer m
// - Fourth line: m space-separated integers (second list)

// Output:
// - Print the merged linked list elements, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 4
// 15 25 35 45

// Output:
// 10 15 20 25 30 35 40 45 50

// Explanation:
// Compare nodes of both lists, append smaller to result, continue until all nodes are merged.

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

//create LL
struct Node* createList(int n){
    struct Node *head=NULL;
    struct Node *temp=NULL;
    struct Node *newNode;

    for (int i=0; i<n; i++)
    {
        newNode=(struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &newNode->data);
        newNode->next=NULL;

        if(head==NULL){
            head=newNode;
            temp=newNode;
        }else{
            temp->next=newNode;
            temp=newNode;
        }
    }
    return head;
}
//merge two lists
struct Node* merge(struct Node *head1, struct Node *head2){
    struct Node *head=NULL;
    struct Node *temp=NULL;

    while(head1!=NULL && head2!=NULL)
    {
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        if(head1->data < head2->data)
        {
            newNode->data = head1->data;
            head1 = head1->next;
        }else{
            newNode->data = head2->data;
            head2 = head2->next;
        }
        newNode->next = NULL;

        if(head == NULL)
        {
            head = newNode;
            temp = newNode;
        }else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    while(head1 != NULL)
    {
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = head1->data;
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode;
        head1 = head1->next;
    }

    while(head2 != NULL)
    {
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = head2->data;
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode;
        head2 = head2->next;
    }
    return head;
}

// Print List
void display(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}

int main()
{
    int n,m;
    scanf("%d",&n);
    struct Node *head1 = createList(n);

    scanf("%d",&m);
    struct Node *head2 = createList(m);

    struct Node *result = merge(head1,head2);
    display(result);

    return 0;
} 