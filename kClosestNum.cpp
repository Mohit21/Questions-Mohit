#include<iostream>
#include<set>

using namespace std;

int main()
{
       
       int A[]={12, 16, 22, 30, 35, 39, 42,45, 48, 50, 53, 55, 56},m,pos,X,k,i1,j1;
       m=sizeof(A)/sizeof(A[0]);
       int B[m];
       for(int i=0;i<m;i++){
               B[i]=A[i];
               }
       set <int> v;
       set <int>::iterator it;
       cout<<"\nEnter the values of x and k:";
       cin>>X>>k;
       for(int i=0;i<m;i++){
               if(B[i]==X){
                          pos=i;
                          }
               }
       for(int i=0;i<pos;i++){
               B[i]-=X;
               if(B[i]<0){
                          B[i]*=(-1);
                          }
               }
       for(int i=pos+1;i<m;i++){
               B[i]-=X;
               }
       i1=pos-1;
       j1=pos+1;
       while((i1>=0)&&(j1<m)){
                          if((B[i1]<B[j1])&&k!=0){
                                         v.insert(i1);
                                         i1--;
                                         k--;                    
                                          }
                       else if(B[i1]>B[j1]&&k!=0){
                                                  v.insert(j1);
                                                  j1++;
                                                  k--;
                            }
                        else if(B[i1]==B[j1]&&k!=0){
                                                  v.insert(i1);  
                                                  v.insert(j1);
                                                  i1--;
                                                  j1++;
                                                  k-=2;
                            }
 
                        else{
                             i1--;
                             j1++;
                             }
                       }
       for(it=v.begin();it!=v.end();++it){
               i1=*it;
               cout<<"-->"<<A[i1];
               }
       system("pause");
       return 0;       
       }
