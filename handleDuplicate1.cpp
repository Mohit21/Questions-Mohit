#include<iostream>

using namespace std;

struct node{
       int info;
       int c;
       node *left,*right;
       };
       
void insert(node **tree,int n){
     node *temp=NULL;
     if(!*tree){
                temp=new node;
                temp->info=n;
                temp->c=1;
                temp->left=temp->right=NULL;
                *tree=temp;
                return;
                }
     if((*tree)->info==n){
                        (*tree)->c+=1;
                        }
     else if((*tree)->info>n){
          insert(&((*tree)->left),n);
          }
     else if((*tree)->info<n){
          insert(&((*tree)->right),n);
          }
     }
     
node* deleteNode(node* tree,int n){
      node *temp=NULL;
      if(tree){
               if(tree->info==n){
                                 if(tree->c>1){
                                               tree->c-=1;
                                               }
                                 else if(tree->left==NULL){
                                                      temp=tree->right;
                                                      free(tree);
                                                      return temp;
                                                      }
                                 else if(tree->right==NULL){
                                                      temp=tree->left;
                                                      free(tree);
                                                      return temp;
                                      }
                                 }
               else if(tree->info>n){
                    tree->left=deleteNode(tree->left,n);
                    }
               else if(tree->info<n){
                    tree->right=deleteNode(tree->right,n);
                    }
               }
               return tree;
      }
     
void inOrder(node *tree){
     if(tree){
              inOrder(tree->left);
              cout<<"-->"<<tree->info<<"("<<tree->c<<")";
              inOrder(tree->right);
              }
     }

int main(){
    node *root=NULL;
    insert(&root,10);
    insert(&root,20);
    insert(&root,9);
    insert(&root,11);
    insert(&root,10);
    insert(&root,12);
    insert(&root,12);
    insert(&root,12);
    inOrder(root);
    cout<<"\n\n";
    root=deleteNode(root,9);
    root=deleteNode(root,12);
    inOrder(root);              
    system("pause");
    return 0;
    }
