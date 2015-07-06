/*
K’th Largest Element in BST when modification to BST is not allowed
Given a Binary Search Tree (BST) and a positive integer k, find the k’th largest element in the Binary Search Tree.
*/

#include<iostream>
#include<cmath>
#include<set>

using namespace std;

int k;
set<int> s;
set<int>:: iterator it;

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
     
void inOrder(node *tree){
     if(tree){
               inOrder(tree->left);
               cout<<"-->"<<tree->info;
               s.insert(tree->info);
               inOrder(tree->right);
               }
     }
          
int getKthLarge(node *tree){
    int n;
    for(it=s.begin();it!=s.end();++it){
                                      if(k==1)
                                              break;
                                      k--;
                                      }
    n=*it;
    return n;
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
    cout<<"\nEnter the value of K:";
    cin>>k;
    cout<<"\nYou have entered k as:"<<k<<endl;
    inOrder(root);
    cout<<"\nKth largest element is :"<<getKthLarge(root);
    system("pause");
    return 0;
    }
