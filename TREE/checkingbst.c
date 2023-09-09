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
struct node* isBST(struct node* root)
{
    
     if(root==NULL)
    {
        return 1;
    }

    if(root->left!=NULL && root->left->data > root->data)
    {
        return 0;
    }

    if(root->right!=NULL && root->right->data < root->data)
    {
        return 0;
    }

    if(!isBST(root->left) || !isBST(root->right))
    {
        return 0;
    }

    return 1;
}
   /* if(root!=NULL)
    {
       if(root->data>=root->left->data)
       {
        return 0;
       }
       if(root->data)
    }**/

 
int main()
{
    struct node * p= createnode(5);
    struct node * p1=createnode(3);
    struct node * p2=createnode(6);
    struct node * p3= createnode(1);
    struct node * p4=createnode(4);
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
     printf("%d",isBST(p));
    return 0;
    }