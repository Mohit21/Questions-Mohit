#include<bits/stdc++.h>
using namespace std;
//Template by Mohit Kumra
#define ll long long
#define afor(i,N) for(i;i<N;i++)
#define beg ll T;cin>>T;while(T--)

using namespace std;

int main(){
	beg{
		ll N;
		cin>>N;
		ll A[N][N];
		ll size1=N*N+1;
		ll R[size1],C[size1];
		ll stps=0;
		for(ll i=0;i<N;i++){
			for(ll j=0;j<N;j++){
				cin>>A[i][j];
				int ind=A[i][j];
				R[ind]=i;
				C[ind]=j;
			}
		}
		int prsi=R[1],prsj=C[1];
		for(int i=2;i<size1;i++)
		{
			if(prsi>R[i]){
                stps+=(prsi-R[i]);
			}
			else{
                stps+=(R[i]-prsi);
			}
			if(prsj>C[i]){
                stps+=(prsj-C[i]);
			}
			else{
                stps+=(C[i]-prsj);
			}
			prsi=R[i];
			prsj=C[i];
		}
		cout<<stps<<endl;
	}
return 0;
}
