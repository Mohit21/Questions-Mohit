#include<bits/stdc++.h>

using namespace std;

int main(){
long T;
cin>>T;
while(T--){
    	long long N;
    	cin>>N;
    	long long W[N];
    	for(long long i=0;i<N;i++){
            cin>>W[i];
    	}
    	long long ans[N];
    	for(long long i=0;i<N;i++){
            ans[i]=i+W[i];
    	}
    	cout<<*max_element(ans,ans+N);
    	cout<<endl;
}
//system("pause");
return 0;
}
