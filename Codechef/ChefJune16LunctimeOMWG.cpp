#include<bits/stdc++.h>

using namespace std;

int main(){
long long T1;
cin>>T1;
while(T1--){
    	int N,M,N1,M1;
    	long long count=0;
        cin>>N>>M;
        N1=N;M1=M;
        while(N1>0 && M1>0){
                count+=(M1-1)+(N1-1);
                M1--;
                N1--;
                }
            count*=2;
            N=abs(N-M);
            count-=N;
            cout<<count<<endl;
}
return 0;
}


/*#include<bits/stdc++.h>

using namespace std;

int main(){
long long T;
cin>>T;
while(T--){
    	int N,M;
    	long long count=0;
        cin>>N>>M;
        while(M>0 && N>0){
            count+=(M-1)+(N-1);
            M--;N--;
        }
        M-=N;
        count-=M;
        cout<<2*count<<endl;
        /*int A[N][M];
        memset(A,0,sizeof(A));
        for(int i=0;i<N;i++){
            count1=0;
            for(int j=0;j<M;j++){
                A[i][j]=1;
                if(j==0){
                    if(A[i][j+1]==1){
                        count1++;
                    }
                    if(i+1!=N){
                            if(A[i+1][j]==1){
                                count1++;
                        }
                    }
                    if(i-1>-1){
                        if(A[i-1][j]==1){
                            count1++;
                        }
                    }
                }
                else if(j==N-1){
                    if(A[i][j-1]==1){
                        count1++;
                    }
                    if(i+1!=N){
                            if(A[i+1][j]==1){
                                count1++;
                        }
                    }
                    if(i-1>-1){
                        if(A[i-1][j]==1){
                            count1++;
                        }
                    }
                }
                else{
                    if(i+1!=N){
                        if(A[i+1][j]==1){
                            count1++;
                        }
                    }
                    if(i-1>-1){
                        if(A[i-1][j]==1){
                            count1++;
                        }
                    }
                    if(A[i][j+1]==1){
                        count1++;
                    }
                    if(A[i][j-1]==1){
                        count1++;
                    }
                }
            }
            count+=count1;
        }

    cout<<count<<endl;
}
return 0;
}*/
