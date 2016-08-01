#include<bits/stdc++.h>

using namespace std;
int main(){
        long long int n;
        cin>>n;
        long long A[36];
        A[0]=1;
        for(int i=1;i<=35;i++){
            A[i]=A[i-1]*2;
        }
        long long ans=0;
        while(1){
            if(n==0){
                break;
            }
            else{
               int temp;
               for(int i=0;i<=35;i++){
                    if(A[i]<=n){
                        temp=i;
                    }
                    else{
                        break;
                    }
               }
                n=n-A[temp];
                ans++;
                }
            }
        cout<<ans;
return 0;
}
