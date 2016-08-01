
#include<iostream>
#include<algorithm>
#include<set>
#include<vector>

using namespace std;

struct node{
       int info;
       node *left,*right;
       }*root;

void insert(node **tree,int n){ 
     node *temp;
     if(!*tree){
                temp=new node;
                temp->left=temp->right=NULL;
                temp->info=n;
                *tree=temp;                
                return ;
                }
     if(n>(*tree)->info){
          insert(&((*tree)->right),n);
          }
     else if(n<=(*tree)->info){
          insert(&((*tree)->left),n);
          }
     }
     
void preOrder(node *tree){
     if(tree){
              cout<<"-->"<<tree->info;
              preOrder(tree->left);
              preOrder(tree->right);
              }
     }
     

void inOrder(node *tree){
     if(tree){
              inOrder(tree->left);
              cout<<"-->"<<tree->info;
              inOrder(tree->right);
              }
     }
     
void postOrder(node *tree){
     if(tree){
              postOrder(tree->left);
              postOrder(tree->right);
              cout<<"-->"<<tree->info;
              
              }
     }
     
int height(node *tree){
    int lh,rh;
    if(tree==NULL){
                   return 0;
                   }
    else{
         lh=height(tree->left);
         rh=height(tree->right);
    }
    if(lh>rh)
             return (lh+1);
    else
        return (rh+1);
    }
    
void printGivenLevel(node *tree,int n){
                  if(tree==NULL){
                           return;
                           }
                  else if(n==1){
                       cout<<"-->"<<tree->info;
                       }
                  else{
                       printGivenLevel(tree->left,n-1);
                       printGivenLevel(tree->right,n-1);
                       }
                  } 

void printGivenLevel(node *tree,int n,bool temp){
                  if(tree==NULL){
                           return;
                           }
                  else if(n==1){
                       cout<<"-->"<<tree->info;
                       }
                  else{
                       if(temp==true){
                                     printGivenLevel(tree->left,n-1,temp);
                                     printGivenLevel(tree->right,n-1,temp);                       
                       }
                       else{
                            printGivenLevel(tree->right,n-1,temp);                       
                            printGivenLevel(tree->left,n-1,temp);
                            }
                       }
                  }
                     
void levelOrder(node *tree){
     int h;
     h=height(tree);
     for(int i=1;i<=h;i++){
             printGivenLevel(tree,i);
             printf("\n");
             }
     
     }
     
void zigzagOrder(node *tree){
     int h;
     bool temp=false;
     h=height(tree);
     for(int i=1;i<=h;i++){  
             printGivenLevel(tree,i,temp);
             temp=!temp;
             printf("\n");
             }
     }
int main(){
    root==NULL;
/*
                  70
             40        110
            0   57   89    124
             23    87   98
              


*/
    
    insert(&root,70);
    insert(&root,40);
    insert(&root,110);
    insert(&root,57);
    insert(&root,89);
    insert(&root,0);
    insert(&root,98);
    insert(&root,23);
    insert(&root,124);
    insert(&root,87);
    cout<<"\nPre-Order\n";
    preOrder(root);
    cout<<"\nIn-Order\n";
    inOrder(root);
    cout<<"\nPost-Order\n";
    postOrder(root);
    cout<<"\nLevel-Order\n";
    levelOrder(root);
    cout<<"\nZigzag-Order\n";
    zigzagOrder(root);
    system("pause");
    return 0;
    }
