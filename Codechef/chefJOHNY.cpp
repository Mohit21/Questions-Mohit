#include<bits/stdc++.h>

using namespace std;

int main(){
long T;
cin>>T;
while(T--){
    	long long N,K,ans=0;
    	cin>>N;
    	long long A[N];
    	for(long long i=0;i<N;i++){
            cin>>A[i];
    	}
    	cin>>K;
        K-=1;
        ans=A[K];
        sort(A,A+N);
        vector<long long> v (A,A+N);
        vector<long long>::iterator it;
        it=find(v.begin(),v.end(),ans);
        long long dist=distance(v.begin(),it);
        cout<<(dist+1);
        cout<<endl;
        v.clear();
}
//system("pause");
return 0;
}
