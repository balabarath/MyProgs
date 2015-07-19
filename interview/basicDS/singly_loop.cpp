#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
};
void insert(struct node *head, int data)
{
     struct node *new_node = (struct node*) malloc(sizeof(struct node));
     new_node->data = data;
     new_node->next = head->next;
     head->next = new_node;
}
struct node* findLoop(struct node *head)
{
     struct node *p1 = head;
     struct node *p2 = head;
     while(p1!=NULL || p2!=NULL)
     {
        p1=p1->next;
        p2=p2->next->next;
        if(p1==p2)
        {
          return p1;
        }
     }
     return NULL;
}
struct node* findLoopPointMethod2(struct node *head, struct node *insider)
{
    /*
    First the number of nodes in the loop node will be calculated say k. Then a 
    pointer will be moved k nodes from header; Now it will in the k th 
    position, it has to move n(number of nodes in the list)-k positions to
    complete the traversal in which the loop point is present. Since we don't
    know the length of the list, we will move an another pointer from the header
    as well as the another pointer from k, the point at which both meets is the
    loop point.
    */
    
    //Finding number of nodes in the loop
    struct node *p = insider;
    struct node *outsider = head;
    int k = 0;
    do
    {
       k++;
       p=p->next;
    }while(p!=insider);

    p = head;
    for(int i = 0; i < k; i++)
      p=p->next;
    while(outsider == p)
    {
      outsider = outsider->next;
      p=p->next;
    }
    return outsider;
}
struct node* findLoopPointMethod1(struct node *head, struct node *insider)
{
    /*
    From loop insider node, going to check each node
    from the head, whether it its reachable or not. The first node reachable
    is the loop point;
    */
    struct node *p1 = head;
    struct node *insiderCopy = insider;
    //printf("******* %d", insiderCopy->data);
    while(p1 != NULL)
    {
       do
       {
         if(insiderCopy->next == p1)
         {
           return insiderCopy;
         }
         insiderCopy = insiderCopy->next;
       }while(insiderCopy != insider);
       insiderCopy = insider;
       p1 = p1->next;
    }
    return NULL;
}
void print(struct node* head)
{
     struct node* p = head->next;
     while(p != NULL)
     {
        printf("->%d", p->data);
        p = p->next;
     }
     printf("\n");
}
int main()
{
    //Driver code
    struct node *head = (struct node*) malloc(sizeof(struct node));
    head->data = 0;
    head->next = NULL;
    insert(head, 6);
    insert(head, 5);
    insert(head, 4);
    insert(head, 3);
    insert(head, 2);
    insert(head, 1);
    print(head);
    head->next->next->next->next->next = head->next->next->next;
//    print(head);
//    printf("%d\n", findLoop(head)->data);
    struct node *temp = findLoopPointMethod1(head, findLoop(head));
    struct node *temp2 = findLoopPointMethod2(head, findLoop(head));
    if(temp2 == NULL)
    {
      printf("There are no loop point found");
    }
    else
    {
       printf("%d", temp->data);
    }
    scanf("%d");
    return 0;
}
