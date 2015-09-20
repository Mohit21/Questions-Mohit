#include<iostream>
#include<stack>

using namespace std;

void getNearLeftMin(int A[],int n){
     stack<int>s;
     for(int i=0;i<n;i++){
             while(!s.empty()&&s.top()>=A[i])
                                              s.pop();
             if(s.empty())
             cout<<"-->"<<"_";

             else
             cout<<"-->"<<s.top();
             s.push(A[i]);
             }
     }
     
int main(){
    int A[]={1,3,0,2,5},n;
    n=sizeof(A)/sizeof(A[0]);
    getNearLeftMin(A,n);
    system("pause");
    return 0;
    }
