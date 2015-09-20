#include<iostream>
using namespace std;

struct node{
       int info;
       node *left,*right;
       }*root;

void insert(node **tree,int n){
     if(!*tree){
                node *temp=NULL;
                temp=new node;
                temp->left=temp->right=NULL;
                temp->info=n;
                *tree=temp;
                return;
                }
     if(n>(*tree)->info){
                         insert(&((*tree)->right),n);
                         }
     else if(n<(*tree)->info){
          insert(&((*tree)->left),n);
          }     
     }
     
int height(node *temp){
    int lh,rh;
    if(temp==NULL){
                   return 0;    
             }
    else{
         lh=height(temp->left);
         rh=height(temp->right);
         }
    if(lh>rh)
    return (lh+1);
    else
    return (rh+1);
    }

void printGivenLevel(node *tree,int n,bool ltr){
     if(tree==NULL){
                    return;
                    }
     else if(n==1){
          cout<<"-->"<<tree->info;
          }
     else{
          if(ltr){
                  printGivenLevel(tree->left,n-1,ltr);
                  printGivenLevel(tree->right,n-1,ltr);
                  }
          else{
                  printGivenLevel(tree->right,n-1,ltr);
                  printGivenLevel(tree->left,n-1,ltr);
               }
          }
     
     }
void levelOrder(node *tree){
     int h=height(tree);
     bool ltr=false;
     for(int i=1;i<=h;i++){
             printGivenLevel(tree,i,ltr);
             ltr=!ltr;
             cout<<"\n";
             }
     
     }
int main(){
    root=NULL;
    insert(&root,85);
    insert(&root,70);
    insert(&root,90);
    insert(&root,65);
    insert(&root,25);
    insert(&root,55);
    insert(&root,45);
    insert(&root,89);
    insert(&root,94);
    insert(&root,102);
    insert(&root,100);
    cout<<"\nThe ZigZag Order!!"<<endl;
    levelOrder(root);
    cout<<endl;
    system("pause");
    return 0;
    }
