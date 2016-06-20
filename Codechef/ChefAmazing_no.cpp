#include<iostream>
#include<cmath>
#include<cstdlib>
#include<sstream>
#include<algorithm>
#include<cstring>
#include<string>
#define num 1000000007

using namespace std;

long long int amazingness(string a,int size){
    int size1=2*size;
    int s[size1];
    int *it;
    int k=0,k1=0;
    memset(s,0,sizeof(s));
    long long ans = 0;
    for (int i = 0; i <size; i++ ) {
         int val = 0;
         for ( int j = i; j <size; j++ ) {
            val=(val^(a[j]-48))%num;
            if(val==0&&k1==0){
                              s[k++]=val;
                              k1++;
                              }
            it=find(s,s+size1,val);
            if (it==(s+size1)) {
                 ans += (val%num);
                 s[k++]=val;
                 }
         }
   }
   ans%=num;
   
   return ans;
}

int NumDigits(int x)  {
    return (x < 10 ? 1 :
    	(x < 100 ? 2 :
    	(x < 1000 ? 3 :
    	(x < 10000 ? 4 :
    	(x < 100000 ? 5 :
    	(x < 1000000 ? 6 :
    	(x < 10000000 ? 7 :
    	(x < 100000000 ? 8 :
    	(x < 1000000000 ? 9 :
    	10)))))))));
}

int main(){
int T;
cin>>T;
long long sum;
while(T--){
    long long L,R,ans=0;
    sum=0;
    cin>>L;
    cin>>R;
    long long N;
    if(R<10){
             for(int i=L;i<=R;i++){
                      N=i;
                      stringstream st;
                      st << N;
                      string B(st.str());
                      ans=amazingness(B,1);
                      sum+=ans;
                       }
             }
    else{
         string str;
         int size=0,k,a;
         size=NumDigits(R);
         int A[size];
         for(int i=L;i<=R;i++){
          N=i;
          stringstream st;
          st << N;
          string B(st.str());
          ans=amazingness(B,size);
          sum+=ans;
          }
    }
    cout<<sum<<endl;
}
system("pause");
return 0;
}
