#include<iostream>

using namespace std;

int main(){
long long R,G,B,K,ans,ans1;
int T;
cin>>T;
while(T--){
	R=0;B=0;G=0;ans=0;
	cin>>R;cin>>G;cin>>B;cin>>K;
	if(K==1){
		ans=1;		
	}
	else{
		//ans=3*(K-1)+1;
		if(R>B&&R>G){
                     ans=K+B+G;
                     }
  		else if(B>R&&B>G){
                     ans=K+R+G;
                     }
  		else if(G>B&&G>R){
                     ans=K+B+R;
                     }
       else if(R==B&&B==G){
            ans=3*(K-1)+1; 
         }
    }
	cout<<ans<<endl;
}
system("pause");
return 0;
}
