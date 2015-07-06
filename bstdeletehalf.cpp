/*
Given a binary tree, how do you remove all the half nodes?
Given A binary Tree, how do you remove all the half nodes (which has only one child)? Note leaves should not be touched as they have both children as NULL.

O/P---->8-->9-->11-->12-->15
*/

#include<iostream>
#include<cmath>

using namespace std;
int k;
struct node{
       int info;
       node *left;
       node *right;
       };
       
void insert(node ** tree,int n){
     node *temp=NULL;
     if(*tree==NULL){
                     temp=new node;
                     temp->left=temp->right=NULL;
                     temp->info=n;
                     *tree=temp;
                     return;
                     }
     if(n>(*tree)->info){
                         insert(&((*tree)->right),n);               
                         }
     else{
          insert(&((*tree)->left),n);
          }
     }
     
node* deletenNode(node *tree){
      if(tree==NULL){
                    return NULL;
                    }
      tree->left=deletenNode(tree->left);
      tree->right=deletenNode(tree->right);
      if(tree->left==NULL && tree->right==NULL){
                          return tree;            
            }
      if(tree->left==NULL){
                     node *temp=tree->right;
                     free(tree);
                     return temp;                      
                      }
      if(tree->right==NULL){
                     node *temp=tree->left;
                     free(tree);
                     return temp;
                    }
                    return tree;
               }
      
void inorder(node *tree){
     if(tree){
              inorder(tree->left);
              cout<<"-->"<<tree->info;
              inorder(tree->right);
              }
     }     
int main(){
    node *root=NULL,*root1=NULL;
    insert(&root,12);
    insert(&root,7);
    insert(&root,9);
    insert(&root,8);
    insert(&root,10);
    insert(&root,11);
    insert(&root,13);
    insert(&root,15);
    inorder(root);
    root1=deletenNode(root);
    cout<<"\n";
    inorder(root1);
    system("pause");
    return 0;
    }
