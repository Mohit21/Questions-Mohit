/*
Find sum of all left leaves in a given Binary Tree
Given a Binary Tree, find sum of all left leaves in it. For example, sum of all left leaves in below Binary Tree is 5+23+50 = 78.

Inorder-->5-9-12-15-20-23-49-50-52
*/

#include<iostream>
#include<cmath>

using namespace std;

struct node{
       int info;
       node *left;
       node *right;
       };

void insert(node **tree,int n){
     node *temp=NULL;
     if(*tree==NULL){
                        temp=new node;
                        temp->left=temp->right=NULL;
                        temp->info=n;
                        *tree=temp;
                        return ;
                        }
     if(n>(*(tree))->info){
                           insert(&(*(tree))->right,n);
                           }
     else{
          insert(&(*(tree))->left,n);
          }
     }
     
bool isleaf(node *tree){
     if(tree==NULL){
          return false;
          }
     if(tree->left==NULL && tree->right==NULL){
                         return true;
                         }
          return false;
     }

int sumLeftLeaf(node *tree1){
    int sum=0;
    if(tree1!=NULL){
              if(isleaf(tree1->left)){
                                       sum+=tree1->left->info;
                                       }
              else
                   sum+=sumLeftLeaf(tree1->left);
                   
              sum+=sumLeftLeaf(tree1->right);
              }
              return sum;
    }
       
int main(){
    int sum1=0;
    node *root=NULL;
    insert(&root,20);
    insert(&root,9);
    insert(&root,5);
    insert(&root,12);
    insert(&root,15);
    insert(&root,49);
    insert(&root,23);
    insert(&root,52);
    insert(&root,50);
    //inorder(root);
    sum1=sumLeftLeaf(root);
    cout<<"-->Sum of All Left Leaves:"<<sum1<<endl;
    system("pause");
    return 0;
    }
