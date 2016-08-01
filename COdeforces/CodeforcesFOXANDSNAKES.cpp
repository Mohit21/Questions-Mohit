#include<bits/stdc++.h>
using namespace std;

int main(){
    	long long N,M;
    	bool flag=false;
    	cin>>N>>M;
    	for(long long i=0;i<N;i++){
            for(long long j=0;j<M;j++){
                if(i%2==0){
                    cout<<"#";
                }
                else{
                        if(flag==false){
                            if(j!=M-1){
                                cout<<".";
                            }
                            else if(j==M-1){
                                cout<<"#";
                                flag=true;
                            }
                        }
                        else{
                            if(j==0){
                                cout<<"#";
                            }
                            else{
                            cout<<".";
                            }
                            if(j==M-1){
                                flag=false;
                            }
                        }
                }
            }
        cout<<endl;
        }

    return 0;
}

