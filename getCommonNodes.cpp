#include<iostream>
#include<vector>
#include<set>

using namespace std;
struct node{
       int info;
       node *left,*right;
       }*root;
       
vector<int>v,v1;
set<int> s;
set<int>::iterator it;
vector<int>::iterator it1,it2;

void insert(node **tree,int n){
     if(!*tree){
                node *temp=new node;
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

void treeInorder(node *tree){
     if(tree){
              treeInorder(tree->left);
              v.push_back(tree->info);
              cout<<"-->"<<tree->info;
              treeInorder(tree->right);
              }
     }

void tree1Inorder(node *tree){
     
     if(tree){
              tree1Inorder(tree->left);
              v1.push_back(tree->info);
              cout<<"-->"<<tree->info;
              tree1Inorder(tree->right);
              }
     }

void getCommonNode(){
     for(it1=v.begin();it1!=v.end();it1++){
                                           for(it2=v1.begin();it2!=v1.end();it2++){
                                                                                   if(*it1==*it2){
                                                                                                  s.insert(*it1);
                                                                                                  }
                                                                                   else{
                                                                                        continue;
                                                                                        }
                                                                                   }                                      
                                           }
     cout<<"\nThe common nodes are:";
     for(it=s.begin();it!=s.end();it++){
                                      cout<<"-->"<<*it;
                                      }
     
     }
int main(){
    node *root=NULL,*root1=NULL;
    cout<<"\nTree 1";
    insert(&root,5);
    insert(&root,1);
    insert(&root,0);
    insert(&root,4);
    insert(&root,10);
    insert(&root,7);
    insert(&root,9);
    cout<<"\nTree 2";
    insert(&root1,10);
    insert(&root1,7);
    insert(&root1,4);
    insert(&root1,9);
    insert(&root1,20);
    cout<<"\nInorder for tree1";
    treeInorder(root);
    cout<<"\nInorder for tree2";
    tree1Inorder(root1);
    getCommonNode();
    cout<<endl;
    system("pause");
    return 0;
    }

