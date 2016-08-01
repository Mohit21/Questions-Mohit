#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[5];
    for(int i=0;i<5;i++){
        cin>>A[i];
    }
    int max=*(max_element(A,A+5));
    int count[max+1];
    memset(count,0,sizeof(count));
    for(int i=0;i<5;i++){
        count[A[i]]++;
    }

    return 0;
}

