//BINARY TREE
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

void displayPre(node *tree){
     if(tree){
              cout<<"-->"<<tree->info;
              displayPre(tree->left);
              displayPre(tree->right);
              }
              
     }

void displayIn(node *tree){
     if(tree){
              
              displayIn(tree->left);
              cout<<"-->"<<tree->info;
              displayIn(tree->right);
              }
     }

void displayPost(node *tree){
     if(tree){
              
              displayPost(tree->left); 
              displayPost(tree->right);
              cout<<"-->"<<tree->info;
              }
     }
void displayLeft(node *tree){
     int i=0;
     while(tree->left!=NULL){
                             
                                  cout<<"\nLevel-"<<i++;
                                  cout<<"-->"<<tree->left->info;
                                  tree=tree->left;
                             }
     }
     
void displayRight(node *tree){
     int i=0;
     while(tree->right!=NULL){
                                  cout<<"\nLevel-"<<i++;
                                  cout<<"-->"<<tree->right->info;
                                  tree=tree->right;
                             }
     }
     
void displayRoot(node *tree){
     while(tree!=NULL){
                       if(tree->left!=NULL&&tree->right!=NULL){
                                                               cout<<"-->"<<tree->info;
                                                               }
                       tree=tree->left;
                       tree=tree->right;
                       }
     }

int main(){
    
    node *root=NULL;
    insert(&root,9);
    insert(&root,15);
    insert(&root,6);
    insert(&root,11);
    insert(&root,17);
    insert(&root,2);
    insert(&root,1);
    insert(&root,7);
    insert(&root,8);
    insert(&root,16);
    displayPre(root);
    cout<<"\n";
    displayIn(root);
    cout<<"\n";
    displayPost(root);
    cout<<"\n";
    displayLeft(root);
    cout<<"\n";
    displayRight(root);
    cout<<"\n";
    cout<<"\nParent ROOT";
    displayRoot(root);
    cout<<"\n";
//    zigzag(root);
    cout<<"\n";
    system("pause");
    return 0;
    }
