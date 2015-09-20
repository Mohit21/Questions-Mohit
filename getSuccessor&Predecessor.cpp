#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
vector<int>::iterator it;
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
void inOrder(node *tree){
     if(tree){
              inOrder(tree->left);
              cout<<"-->"<<tree->info;
              v.push_back(tree->info);
              inOrder(tree->right);
              }
     }

void sucPre(node *tree,int key){
     int k=0,pos,s,p;
     for(it=v.begin();it!=v.end();it++){
                                        k++;
                                        if(key==*it){
                                                     pos=k;
                                                     break;
                                                     }
                                        }
     pos-=1;k+=1;
     for(it=v.begin();it!=v.end();it++){
                                         if(pos==1){
                                                     p=*it;       
                                                        }
                                         if(k==1){
                                                 s=*it;
                                                    }
                                                    pos--;
                                                    k--;                                   
                                        }
     cout<<"\n-->predecessor"<<p<<endl;
     cout<<"\n-->Successor"<<s<<endl;
     }
int main(){
    node *root=NULL;
    int key;
    insert(&root,30);
    insert(&root,20);
    insert(&root,40);
    insert(&root,70);
    insert(&root,60);
    insert(&root,80);
    inOrder(root);
    cout<<"\nEnter the key:";
    cin>>key;
    sucPre(root,key);
    system("pause");
    return 0;
    }
