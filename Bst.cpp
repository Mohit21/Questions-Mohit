/*
This is the code for BSt and it sthree traversal methods....Recursive
*/

#include<iostream>

using namespace std;

struct node {
       int info;
       node *left,*right;
       };
       
void insert(node **tree,int n)
{
     node *temp;
     if(!(*tree))
     {
                temp=new node;
                temp->info=n;
                temp->left=temp->right=NULL;
                *tree=temp;
                return; 
                 }
     if(n>(*tree)->info)
     {
                        insert(&(*tree)->right,n);
                        }
     else if(n<=(*tree)->info)
     {
          insert(&(*tree)->left,n);
          }
     
     }

void preOrder(node *tree)
{
     if(tree)
     {
     cout<<"\n->"<<tree->info;
     preOrder(tree->left);
     preOrder(tree->right);
     }
     }
     
void inOrder(node *tree)
{
     if(tree)
     {
     inOrder(tree->left);
     cout<<"\n->"<<tree->info;
     inOrder(tree->right);
     }
    }
     
void postOrder(node *tree)
{
     if(tree)
     {
     postOrder(tree->left);
     postOrder(tree->right);
     cout<<"\n->"<<tree->info;
     }
}

node* find(node ** tree, int val)
{
   if(!(*tree))
    {
        return NULL;
    }

     else if(val <(*tree)->info)
    {
        find(&((*tree)->left), val);
    }
    else if(val > (*tree)->info)
    {
        find(&((*tree)->right), val);
    }
    else if(val == (*tree)->info)
    {
        return *tree;
    }
}

int main()
{
    node *root=NULL,*temp;
    int max,min;
    insert(&root,2);
    insert(&root,1);
    insert(&root,4);
    insert(&root,4);
    insert(&root,5);
     cout<<"\n";
    preOrder(root);
     cout<<"\n";
    inOrder(root);
     cout<<"\n";
    postOrder(root);    
   
    temp=find(&root,2);
    if(temp)
    {
            cout<<"\nThe searched node is:"<<temp->info;
            }
    else
    {
        cout<<"\nNothing is found!!!!";
        }
    system("pause");
    return 0;
    }
