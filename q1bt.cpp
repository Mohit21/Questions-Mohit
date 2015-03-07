/*
Left-Most element at each level of Binary Tree
             9
            / \
           6   15
              / \
             11  17
Leftmost Element
Level-1--->6
Level-2--->2
Level-3--->1
*/

#include<iostream>
using namespace std;

struct node{
       int info;
       node *left,*right;
       };
       
void insert(node **tree,int n){
     node *temp=NULL;
     if(!(*tree)){
                  temp=new node;
                  temp->left=temp->right=NULL;
                  temp->info=n;
                  *tree=temp;
                  return;
                  }
     if(n<(*tree)->info){
                         insert(&((*tree)->left),n);
                         }             
     else if(n>(*tree)->info){
                              insert(&((*tree)->right),n);
          }
     else{
          cout<<"\nAlready present";
          }
     
     }
     
void displayIn(node *tree){
     if(tree){
              
              displayIn(tree->left);
              cout<<"-->"<<tree->info;
              displayIn(tree->right);
              }
     }
     
void displayLeft(node *tree){
     int i=0;
     node *l1,*r1;
     while(tree!=NULL){
                       if(tree->left!=NULL && tree->right!=NULL){
                          l1=tree->left;
                          r1=tree->right;
                          }
                       while(l1->left!=NULL){
                                             cout<<"-->"<<l1->info;
                                             l1=l1->left;
                                             }
                       while(r1->left!=NULL){
                                             cout<<"-->"<<r1->info;
                                             r1=l1->left;
                                             }
                                             displayLeft(tree=tree->left);
                                             displayLeft(tree=tree->right);
                       tree=tree->left;
                       }
     }

int main(){
    node *root=NULL;
    insert(&root,9);
    insert(&root,6);
    insert(&root,15);
    insert(&root,11);
    insert(&root,17);
    cout<<"\n";
    displayIn(root);
    cout<<"\n";
    cout<<"\nLeftmost element\n";
    displayLeft(root);
    cout<<"\n";
    system("pause");
    return 0;
    }
