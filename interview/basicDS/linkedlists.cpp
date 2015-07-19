#include<stdio.h>
#include<stdlib.h>
struct node
{
     struct node *next;
     int data;
};

bool insert(struct node* head, int data, bool first)
{
     struct node* new_node = (struct node*) malloc(sizeof(struct node));
     if(new_node == NULL)
     {
        return false;
     }
     new_node->data = data;
     new_node->next = NULL;
     struct node* p = head;
     if(first)
     {
        new_node->next = head->next;
        head->next = new_node; 
     }
     else
     {
        while(p->next != NULL)
        {
          p = p->next;
        }
        p->next = new_node;
     }
     return true;
}

bool insert(struct node* head, int data, int pos)
{
     struct node* new_node = (struct node*) malloc(sizeof(struct node));
     int i = 1;
     if(new_node == NULL)
     {
        return false;
     }
     new_node->data = data;
     new_node->next = NULL;
     struct node* p = head;
  
     while(p->next != NULL && i < pos)
     {
        p = p->next;
        i++;
     }
     new_node->next = p->next;
     p->next = new_node;
     return true;
}


bool delete_node(struct node* head, int data)
{    
     struct node* p = head;
     while(p != NULL)
     {
        if(p->next->data == data)
        {
           p->next = p->next->next;
           break;
        }
        p = p->next;
     }
     return true;
} 

int find(struct node* head, int data)
{
     struct node* p = head->next;
     int pos = 1;
     while(p != NULL)
     {
        if(p->data == data)
        {
           return pos;
        }
        p = p->next;
        pos++;
     }
     return -1;
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

void reverseList(struct node* head)
{
     struct node* prev = head->next;
     struct node* p = prev->next;
     if(p == NULL)
     {
       return;
     }
     struct node* q = p->next;
     prev->next = NULL;
     if(q == NULL)
     {
       p->next = prev;
       head->next = p;
       return;
     }
     while(q != NULL)
     {
       p->next = prev;
       prev = p;
       p = q;
       q = q->next;
     }
     p->next = prev;
     head->next=p;
}

int main()
{
    //driver code
    struct node *head = (struct node*) malloc(sizeof(struct node));
    int pos = 0;
    head->data = 0;
    head->next = NULL;
    insert(head, 5, true);
    insert(head, 10, true);
    //insert(head, 14, true);
    //insert(head, 87, true);
    //insert(head, 7, 2);
    print(head);
    if((pos=find(head, 10)) != -1)
    {                     
       printf("found em at %d\n", pos);
    }
    //delete_node(head, 87);
    print(head);
    reverseList(head);
    print(head);
    reverseList(head);
    print(head);
    scanf("%d");
    return 0;
}
