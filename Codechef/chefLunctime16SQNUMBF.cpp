#include<bits/stdc++.h>

using namespace std;



inline void primeFactors(long long n)
{
    vector<long long> v;
    vector<long long>::iterator it,it1;
    while (n%2 == 0){
        v.push_back(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            v.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
        v.push_back(n);
sort(v.begin(),v.end());
for(it=v.begin();it!=v.end()-1;it++){
    it1=it;
    if(*it==*(++it1)){
        cout<<*it;
        break;
    }
}
}

inline void mul(long long A[],long long N){
    long long m,temp,x;
    long long num=0;
    long long a[100000];
    a[0]=1;
    m=1;
    temp = 0;
    x=0;
    for(long long i=0;i<N;i++)
       {
            for(int j=0;j<m;j++)
            {
               x = ((a[j]*A[i])+temp);
               a[j]=x%10;
               temp = x/10;
            }
             for(;temp>0;temp/=10)
             {
               a[m]=temp%10;
               m++;
             }
       }
    for(int i=m-1;i>=0;i--){
            num=num*10+a[i];
              //cout<<a[i];
    }
    cout<<num<<endl;
    primeFactors(num);
    }

int main(){
long long T1;
cin>>T1;
while(T1--){
    	int N,M,N1,M1;
    	cin>>N;
    	long long A[N];
    	for(long long i=0;i<N;i++){
            cin>>A[i];
    	}
    	/*for(long long i=0;i<N;i++){
            mul*=A[i];
    	}*/
    	mul(A,N);
    	//primeFactors(mul);
        cout<<endl;
}
return 0;
}
