#include<bits/stdc++.h>

using namespace std;

int main(){
long long T1;
cin>>T1;
while(T1--){
    	int N,M,N1,M1;
    	cin>>N>>M;
    	string str;
    	long long A[N][M],count1=0;
        long long count[M];
    	memset(count,0,sizeof(count));
        for(int i=0;i<N;i++){
                cin>>str;
                for(int j=0;str[j]!='\0';j++){
                    if(str[j]=='1')
                    count[j]++;
                }
        }
        for(int i=0;i<M;i++){
            for(int j=count[i]-1;j>0;j--){
                count1+=j;
            }
        }
        cout<<count1<<endl;
}
return 0;
}
