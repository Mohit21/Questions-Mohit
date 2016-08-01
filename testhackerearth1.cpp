#include <iostream>
using namespace std;

int main()
{
    int A,B,N,T,mod,k=0;
    int A1[1000000],ans[1000000];
    cin>>T;
    while(T--){
    	cin>>A;
    	cin>>B;
    	cin>>N;
    	cin>>mod;
    	if(N==2){
    		if(A==B){
    			ans[k++]=A*A;
    		}
    		else{
    			ans[k++]=0;
    		}
    	}
    	else{
             A1[0]=A;A1[1]=B;
             T=0;
    		for(int i=2;i<N;i++){
         		T=(A+B)%mod;
    	   	 	A1[i]=T;
    	   		A=B;
    	   	 	B=T;
       		}
       	for(int j=0;j<N;j++){
       		int x=A1[j],I=j-1;
       		while(I>=0 &&A1[I]>x){
       			A1[I+1]=A1[I];
       			I=I-1;
       		}
       		A1[I+1]=x;
       	}
       	int c=0,c1=0;
    	for(int i=0;i<N;i++){
    		if(A1[i]==A1[i+1]){
    			c++;
          }
       }
    	ans[k++]=c1;
    	}
    }
    for(int i=0;i<k;i++){
    	cout<<ans[i]<<endl;
    }
    cout<<endl;
    system("pause");
    return 0;
    
}
