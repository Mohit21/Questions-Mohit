#include<bits/stdc++.h>
using namespace std;

int main(){
    	string N,M;
    	cin>>N>>M;
    	for(long long i=0;i<N.size();i++){
            N[i]=tolower(N[i]);
            M[i]=tolower(M[i]);
    	}
    	if(N==M){
            cout<<0;
    	}
    	else if(N>M){
            cout<<1;
    	}
    	else{
            cout<<-1;
    	}
    return 0;
}

