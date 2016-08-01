#include<bits/stdc++.h>
using namespace std;

int main(){
    	int T;
    	cin>>T;
    	while(T--){
                long long N;
                cin>>N;
                int flag=0;
                long long n;
                bool grdF=false,grd5=false;
                float avg=0,ttl=0.0;
                for(long long i=0;i<N;i++){
                    cin>>n;
                    ttl+=n;
                    if(n<3){
                        grdF=true;
                    }
                    if(n==5){
                        grd5=true;
                    }
                }
                if(grdF==true || grd5==false){
                    flag=1;
                }
                else{
                    avg=(float)(ttl/N);
                    if(avg<4.0){
                        flag=1;
                    }
                }
        if(flag==1){
            cout<<"No";
        }
    	else{
            cout<<"Yes";
    	}
    cout<<endl;
    }
    return 0;
}

