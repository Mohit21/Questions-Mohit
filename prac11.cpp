#include <iostream>
using namespace std;

int main()
{
    unsigned long int A[10000],B[10000],N,tc,i,j,k=0,l=0,m=0,n=0,n1=0,p1=0,n3;
    int pos=-1,ans[10000];
    cin>>tc;
    
    while(tc!=0){
    	cin>>N;
    	for(i=0;i<N;i++){
    		cin>>A[i];
    	}
    	for(i=0;i<N;i++){
    		cin>>B[i];
    	}
    	for(i=0;i<N;i++){
                         n=0;
                         for(j=0;j<N;j++){
                                          if(A[i]==A[j]&&B[i]==A[j]){
                                                         n++;
                                                         }
                                          if(n1<n){
                                                   if(n3==0){
                                                             n1=n;
                                                             p1=A[i];
                                                   
                                                             }
                                                   }               
                                                                                                                  }
                                          }
                         
        for(i=0;i<N;i++){
                         for(j=0;j<N;j++){
                                          if(B[i]==A[j]&&i>=j&&A[i]==p1){
                                                               if(m==0){
                                                                        //cout<<"hello"<<endl;
                                                                        pos=i-j;
                                                                        //cout<<B[i]<<endl;
                                                                        //cout<<i<<endl;
                                                                        //cout<<j<<endl;
                                                                        //cout<<pos<<endl;
                                                                        }
                                                                        m++;
                                                                        }
                                                         }
                         }
                                     
    	ans[k]=pos;
    	k++;
        tc--;
    }
    while(l<k){
    	if(ans[l]==-1){
    		cout<<0<<endl;
    	}
		else{
			cout<<ans[l]<<endl;
		}    	
		l++;
    }
    system("pause");
    return 0;
}
