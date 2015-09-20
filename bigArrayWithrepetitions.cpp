#include<iostream>
#include<vector>

using namespace std;
vector<int> v,v1;
vector<int>::iterator it;
vector<int>::iterator it1;
struct node {
       int info;
       int count;
       node *left,*right;
       };

void insert(node **tree,int n){
     node *temp=NULL;
     if(!*tree){
                node *temp=new node;
                temp->info=n;
                temp->count=1;
                temp->left=temp->right=NULL;
                *tree=temp;
                return;
                }
     if(n==(*tree)->info){
                        (*tree)->count+=1;
                        }
     else if(n>(*tree)->info){
                              insert(&(*tree)->right,n);
          }
     else if(n<(*tree)->info){
                              insert(&(*tree)->left,n);
          }
     }

void inorder(node *tree){
     if(tree){
               inorder(tree->left);
               cout<<"-->"<<tree->info<<"-->"<<"("<<tree->count<<")";
               v.push_back(tree->info);v1.push_back(tree->count);
               inorder(tree->right);
               }
     }

void sortedArray(int A[],int m){
     int i=0,a;
     it1=v1.begin();
     for(it=v.begin(),it1=v1.begin();it!=v.end(),it1!=v1.end();it++,it1++){
                                        a=*it1;
                                        while(a!=0){
                                                    A[i++]=*it;
                                                    a--;
                                                    }
                                        }
     cout<<"\n";
     for(int j=0;j<m;j++){
             cout<<"-->"<<A[j];
             }
     }
int main(){
    int A[]={100, 12, 100, 1, 1, 12, 100, 1, 12, 100, 1, 1},m;
    m=sizeof(A)/sizeof(A[0]);
    node *root=NULL;
    for(int i=0;i<m;i++){
            insert(&root,A[i]);
            }
    cout<<"\nThe Inorder traversal!!"<<endl;
    inorder(root);
    cout<<"\n\nThe sorted array!!"<<endl;
    sortedArray(A,m);
    cout<<"\n";
    system("pause");
    return 0;
    }
