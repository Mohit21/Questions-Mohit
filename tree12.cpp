#include<iostream>
#include<algorithm>
#include<set>
#include<vector>

using namespace std;

struct node{
       int info;
       node *right,*left;
       }*root;
       
void insert(node **tree,int n){
     node *temp=NULL;
     if(!*tree){
              temp=new node;
              temp->left=temp->right=NULL;
              temp->info=n;
              *tree=temp;
              return;  
                }
     if((*tree)->info>=n){
                      insert(&((*tree)->left),n);          
          }
     else{
          insert(&((*tree)->right),n);
          }          
     }
     
void inOrder(node * tree){
     if(tree){
              inOrder(tree->left);
              cout<<"-->"<<tree->info;
              inOrder(tree->right);
              }
     }

int main(){
    root=NULL;
    insert(&root,10);
    insert(&root,8);
    insert(&root,12);
    insert(&root,5);
    insert(&root,4);
    insert(&root,3);
    insert(&root,2);
    insert(&root,0);
    cout<<"\nInrder";
    inOrder(root);
    
    system("pause");
    return 0;
    }
