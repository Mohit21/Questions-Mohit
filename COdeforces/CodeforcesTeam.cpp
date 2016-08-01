#include<bits/stdc++.h>
using namespace std;

int main(){
    	long long N,count1;
    	cin>>N;
        count1=0;
    	while(N--){
                long long P[N],count[2];
                memset(count,0,sizeof(count));
                for(int i=0;i<3;i++){
                            cin>>P[i];
                            if(P[i]==1){
                                count[1]++;
                            }
                    }
                if(count[1]>=2){
                        count1++;
                }
    	}
    cout<<count1;
    return 0;
}

