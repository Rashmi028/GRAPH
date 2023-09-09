#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
};
struct node * createnode(int data)
{
    struct node *n= (struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    
}
struct node* preorder(struct node * root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
struct node *postorder(struct node*root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);
    }
}
struct node*inorder(struct node*root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}
  

 
int main()
{
    struct node * p= createnode(4);
    struct node * p1=createnode(1);
    struct node * p2=createnode(6);
    struct node * p3= createnode(5);
    struct node * p4=createnode(2);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    printf("preorder form :");
    preorder(p);
     printf("\n");
    printf("\n");
    printf("postorder form :");
    postorder(p);
     printf("\n");
     printf("\n");
    printf("inorder form :");
   
    inorder(p);
     printf("\n");
     
    return 0;
    }