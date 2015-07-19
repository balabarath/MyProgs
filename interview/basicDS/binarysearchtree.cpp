#include<stdio.h>
#include<stdlib.h>
struct tree
{
   int data;
   struct tree *lchild;
   struct tree *rchild;
};

struct tree* create(int data)
{
   struct tree* new_node = (struct tree*) malloc(sizeof(struct tree));
   new_node->data=data;
   new_node->lchild = NULL;
   new_node->rchild = NULL;
   return new_node;
}
void insert(struct tree *node, int data)
{ 
   if(node->data<data)
   {
      if(node->rchild != NULL)
      {
         insert(node->rchild, data);
      }
      else
      {
        node->rchild = create(data);
      }
   }
   else
   {
      if(node->lchild != NULL)
      {
         insert(node->lchild, data);
      }
      else
      {
        node->lchild = create(data);
      }
   }   
}
void traverse(struct tree *node)
{
     if(node == NULL)
        return;
     printf("%d ", node->data);
     traverse(node->lchild);
     traverse(node->rchild);
}
struct tree* binary_search(struct tree *node, int data)
{
   if(node == NULL)
   {
     return NULL;
   }
   if(node->data == data)
   {
     return node;
   }
   if(node->data < data)
   {
      return binary_search(node->rchild,data);
   }
   else
   {
      return binary_search(node->lchild,data);
   }
}
int main()
{
   struct tree *root = NULL;
   if(root == NULL)
   {
    root = (struct tree*) malloc(sizeof(struct tree));
    root->data=15;
    root->lchild = NULL;
    root->rchild = NULL;
   }
   insert(root, 10);
   insert(root, 5);
   insert(root, 11);
   insert(root, 19);
   insert(root, 21);
   insert(root, 17);
   traverse(root);
   struct tree *temp = binary_search(root, 21);
   if(temp == NULL)
   {
      printf("\n node not found");
   }
   else
   {
      printf("\n***%d", temp->data);
   }
      scanf("%d");
   return 0;
}
    
