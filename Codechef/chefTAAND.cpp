#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cin>>N;
    long long i=0,max,max1;
    long long A[N];
    max1=1;
    max=0;
    while(i<N){
               cin>>A[i];
               i++;            
            }
    sort(A,A+N);
    for(int i=0;i<N;i++){
            max=(A[i]&A[i+1]);
            if(max1<max){
                         max1=max;
                         }
            }
    cout<<max1;
    system("pause");
    return 0;
    
    }
