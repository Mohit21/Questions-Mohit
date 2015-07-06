#include<iostream>
#include<set>

using namespace std;
int I[50],l=0;

void findUnion(int A[],int m,int B[],int n){
      set <int> s;
      set <int>::iterator it;
      for(int i=0;i<m;i++) {
              s.insert(A[i]);
              }    
     for(int i=0;i<n;i++) {
              s.insert(B[i]);
              }
    cout<<"\nUnion is as Follows:"<<endl;
    for(it=s.begin();it!=s.end();++it){
            cout<<"-->"<<*it;
            }
     }
     
int partition(int a[],int p,int q){
    int b,i,t;
    b=a[p];
    i=p;
    for(int j=p+1;j<q;j++){
            if(a[j]<b){
                       i=i+1;
                       t=a[j];
                       a[j]=a[i];
                       a[i]=t;
                       }
            }
    t=a[i];
    a[i]=a[p];
    a[p]=t;
    return i;
    }
    
void quickSort(int a[],int p,int q){
     int r;
     if(p<q){
             r=partition(a,p,q);
             quickSort(a,p,r);
             quickSort(a,r+1,q);
             }  
     }


void findIntersection(int A[],int m,int B[],int n){
     int k;
         for(int i=0;i<m;i++){
                 k=0;
                 for(int j=0;j<n;j++){
                         if(A[i]==B[j]){
                                        if(k==0){
                                                 I[l++]=A[i];
                                                 k++;
                                                 }
                                        }                                                            
                        }
                 }
     quickSort(I,0,l);
     }

int main(){
    int A[]={7, 1, 5, 2, 3, 6},B[]={3, 8, 6, 20, 7},m,n;
    m=sizeof(A)/sizeof(A[0]);
    n=sizeof(B)/sizeof(B[0]);
    findUnion(A,m,B,n);
    findIntersection(A,m,B,n);
    cout<<"\nIntersection is as follows:"<<endl;
    for(int i=0;i<l;i++){
            cout<<"-->"<<I[i];
            }
    system("pause");
    return 0;
    }
