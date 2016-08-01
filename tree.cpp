#include<bits/stdc++.h>

using namespace std;

struct Node{
int info;
Node *left,*right;
}*root;

void insert(Node **tree,int val){
    Node *temp=NULL;
    if(!*tree){
        temp=new Node;
        temp->left=temp->right=NULL;
        temp->info=val;
        *tree=temp;
        return;
    }
if(val<=(*tree)->info){
    insert(&((*tree)->left),val);
}
else{
    insert(&((*tree)->right),val);
}
}

void preOrder(Node *tree){
    if(tree){
        cout<<"-->"<<tree->info;
        preOrder(tree->left);
        preOrder(tree->right);
    }
}

void inOrder(Node *tree){
    if(tree){
        inOrder(tree->left);
        cout<<"-->"<<tree->info;
        inOrder(tree->right);
    }
}

void postOrder(Node *tree){
    if(tree){
        postOrder(tree->left);
        postOrder(tree->right);
        cout<<"-->"<<tree->info;
    }
}

int height(Node *tree){
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
    return (rh+1);
}

void printGivenLevel(Node *tree,int n){
    if(!tree){
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

void levelOrder(Node *tree){
    int h=height(tree);
    for(int i=1;i<=h;i++){
        printGivenLevel(tree,i);
        cout<<endl;
    }
}

void printGivenLevel(Node *tree,int n,bool ptr){
    if(!tree){
        return;
    }
    else if(n==1){
        cout<<"-->"<<tree->info;
    }
    else{
        if(ptr){
            printGivenLevel(tree->left,n-1,ptr);
            printGivenLevel(tree->right,n-1,ptr);
        }
        else{
            printGivenLevel(tree->right,n-1,ptr);
            printGivenLevel(tree->left,n-1,ptr);
        }
    }
}

void zigzagOrder(Node *tree){
    int h=height(tree);
    bool ptr=true;
    for(int i=1;i<=h;i++){
        printGivenLevel(tree,i,ptr);
        ptr=!ptr;
        cout<<endl;
    }
}

Node* nextSc(Node * tree){
    Node *curr=tree;
    while(curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}

Node* deleten(int val,Node *tree){
    if(tree==NULL){
        return tree;
    }
    if(val<tree->info){
        deleten(val,tree->left);
    }
    else if(val>tree->info){
        deleten(val,tree->right);
    }
    else{
        if(tree->left==NULL){
            Node *temp=tree->right;
            free(tree);
            return temp;
        }
        else if(tree->right==NULL){
            Node *temp=tree->left;
            free(tree);
            return temp;
        }
        Node *temp1=nextSc(tree->right);
        tree->info=temp1->info;
        tree->right=deleten(temp1->info,tree->right);
    }
return tree;
}


int main(){
Node *root=NULL;
insert(&root,20);
insert(&root,5);
insert(&root,25);
insert(&root,4);
insert(&root,2);
insert(&root,6);
insert(&root,7);
insert(&root,22);
insert(&root,27);
insert(&root,30);
cout<<"\npreOrder"<<endl;
preOrder(root);
cout<<"\ninOrder"<<endl;
inOrder(root);
cout<<"\npostOrder"<<endl;
postOrder(root);
cout<<"\nLevelOrder"<<endl;
levelOrder(root);
cout<<endl;
cout<<"\nZig-ZagOrder"<<endl;
zigzagOrder(root);
cout<<endl;
Node *root1=deleten(2,root);
cout<<endl;
inOrder(root);
return 0;
}
