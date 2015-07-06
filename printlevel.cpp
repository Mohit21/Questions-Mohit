#include<iostream>

using namespace std;

struct node{
       int info;
       node *left,*right;
       };
       
void insert(node **tree,int n){
     node *temp=NULL;
     if(!*tree){
                temp=new node;
                temp->info=n;
                temp->left=temp->right=NULL;
                *tree=temp;
                return;
                }
     if((*tree)->info>n){
          insert(&((*tree)->left),n);
          }
     else if((*tree)->info<n){
          insert(&((*tree)->right),n);
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
     
void printGivenLevel(node *temp,int n){
     if(temp==NULL){
              return;
              }
     else if(n==1){
          cout<<"-->"<<temp->info;
          }
     else{
          cout<<"\n";
          printGivenLevel(temp->left,n-1);
          printGivenLevel(temp->right,n-1); 
          }
     }
     
void levelOrder(node *tree){
     int low,up,h;
     cout<<"\nEnter the lower and the upper limit:";
     cin>>low;
     cin>>up;
     h=height(tree);
     for(int i=1;i<=h;i++){
             if(i>=low&&i<=up){
                               printGivenLevel(tree,i);
                               }
             }
     }

int main(){
    node *root=NULL;
    insert(&root,20);
    insert(&root,8);
    insert(&root,4);
    insert(&root,12);
    insert(&root,10);
    insert(&root,14);
    insert(&root,22);
    levelOrder(root);              
    system("pause");
    return 0;
    }
