#include<iostream>
#include<set>

using namespace std;
struct node{
       int info;
       node *left,*right;
       }*root;
       

set<int> s;
set<int>::iterator it;

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
              s.insert(tree->info);
              cout<<"-->"<<tree->info;
              treeInorder(tree->right);
              }
     }
     
void getkthSmallest(int k){
     int k1=1;
     //cout<<"\ns.size-->"<<s.size();
     for(it=s.begin();it!=s.end();it++){
                                      if(k1==k){
                                                cout<<"\n-->"<<k<<"th smallest number is-->"<<*it;
                                                break;
                                                }
                                      else{
                                           k1++;
                                           continue;
                                           }
                                        
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
    int k;
    cout<<"\nEnter value for K:";
    fflush(stdin);
    cin>>k;
    cout<<"\nInorder for tree1";
    treeInorder(root);
    getkthSmallest(k);
    cout<<endl;
    system("pause");
    return 0;
    }

