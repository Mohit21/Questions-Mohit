#include<bits/stdc++.h>
using namespace std;

inline void primeGen(long long i,long long m){
                            bool prime[i+1];
                            memset(prime,true,sizeof(prime));
                            for (long long p=2;p*p<=i;p++){
                                if (prime[p] == true)
                                {
                                    for (long long j=p*2; j<=i; j += p)
                                        prime[j] = false;
                                }
                            }
                            for (long long p=2; p<=i; p++)
                               if (prime[p] && p>=m)
                                  cout<<p<<endl;
}

int main(){
    long long T;
    cin>>T;
    while(T--){
            long long n,m;
            cin>>m>>n;
            if(m==1){
                        primeGen(n,m+1);
                    }
        else{
                primeGen(n,m);
            }
        cout<<endl;
        }
    return 0;
    }

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    long long T;
    cin>>T;
    while(T--){
            long long n,m;
            cin>>m>>n;
        if(m==1){
                for(long long i=m+1;i<=n;i++){
                    long long count=0;
                    for(long long j=1;j<=sqrt(i);j++){
                        if(i%j==0){
                            count++;
                        }
                    }
                    if(count==1){
                        cout<<i<<endl;
                    }
                }
        }
        else{
            for(long long i=m;i<=n;i++){
            long long count=0;
            for(long long j=1;j<=sqrt(i);j++){
                if(i%j==0){
                    count++;
                }
            }
            if(count==1){
                cout<<i<<endl;
            }
            }
        }
        cout<<endl;
        }
    return 0;
    }
*/
