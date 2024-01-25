#include <stdio.h>
#include <stdlib.h>
struct node
{
       int data;
       struct node *left;
       struct node *right;
};
struct node *root = NULL;

struct node *create(int data)
{
       // to create a node//
       struct node *new;
       new = (struct node *)malloc(sizeof(struct node));
       new->data = data;
       new->left = NULL;
       new->right = NULL;
       return new;
}
// to insert the data into the tree//
struct node *insert(struct node *temp, int data)
{
       if (temp == 0)
       {
              temp = create(data);
       }
       else if (data > temp->data)
       {
              temp->right = insert(temp->right, data);
       }
       else if (data < temp->data)
       {
              temp->left = insert(temp->left, data);
       }
       else
       {
              printf("value exist");
       }
       return temp;
}
// to impliment inorder//
void inorder(struct node *temp)
{
       if (temp == NULL)
              return;

       inorder(temp->left);
       printf("%d  ", temp->data);
       inorder(temp->right);
}
// to impliment postorder//
void postorder(struct node *temp)
{
       if (temp == NULL)
              return;
       postorder(temp->left);
       postorder(temp->right);
       printf("%d   ", temp->data);
}
// preorder//
void preorder(struct node *temp)
{
       if (temp == NULL)
              return;
       printf("%d  ", temp->data);
       preorder(temp->left);
       preorder(temp->right);
}

int main()
{
       int data, choice = 0;
       while (choice != 5)
       {
              printf("\n");
              printf("1 :insert\n,2:inorder\n,3:preorder\n,4:postorder\n");
              scanf("%d", &choice);
              switch (choice)
              {
              case 1:
              {
                     printf("enter data");
                     scanf("%d", &data);
                     root = insert(root, data);
                     break;
              }
              case 2:
                     inorder(root);
                     break;
              case 4:
                     postorder(root);
                     break;
              case 3:
                     preorder(root);
                     break;
              case 5:
                     exit;
              }
       }

       return 0;
}
