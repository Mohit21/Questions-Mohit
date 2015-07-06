#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    int A[]={4, 6, 9, 2, 3, 4, 9, 6, 10, 4},Count[100],n,k=0,min,min1,p1;
    n=sizeof(A)/sizeof(A[0]);
    vector<int> v;
    vector<int>::iterator it;
    for(int i=0;i<n;i++){
            Count[A[i]]=0;
            }
    for(int i=0;i<n;i++){
            Count[A[i]]++;
            }
    for(int i=0;i<n;i++){
            while(Count[A[i]]!=0){
                                  v.push_back(A[i]);
                                  Count[A[i]]--;
                                  }
            }
    for(it=v.begin();it!=v.end();it++){
                                       cout<<*it<<" ";
                                       }
    system("pause");
    return 0;
    }
