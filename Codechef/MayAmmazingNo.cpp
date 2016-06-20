#include<iostream>
#include<set>
#include<cmath>
#include<cstdlib>
#define num 1000000007
using namespace std;

int amazingness(int a[],int size){
    set<long long> s;
    set<long long>::iterator it;
    long long ans = 0;
    for (int i = 0; i <size; i++ ) {
         int val = 0;
         for ( int j = i; j <size; j++ ) {
            val =val^a[j];
            it=s.find(val);
            if (it==s.end()) {
                 ans += val;
                 s.insert(val);
                 }
         }
   }
   s.clear();
   ans%=num;
   return ans;
}

int main(){
int T;
cin>>T;
long long sum;
while(T--){
    long long L,R,R1,div=1,ans=0,div1;
    int count=0;
    sum=0;
    cin>>L;
    cin>>R;
    R1=R;
    int A[9];
    long long N;
    int a;
    if(R<10){
              for(int i=L;i<=R;i++){
                      A[0]=i;
                      ans=amazingness(A,1);
                      //cout<<ans<<endl;
                      sum+=ans;
                       }
             }
    else{
         int B[9];
         /*while(R1!=0){
                 R1/=10;
                 count++;
                 }
         *///for(int i=1;i<count;i++) div*=10;
         for(long long i=L;i<=R;i++){
          N=i;
          //div1=endldiv;
          int size=0,k=0;
          while(N!=0){
                      A[k++]=N%10;
                      N/=10;
                      //div/=10;
                      size++;
                      }
          for(int i=0;i<size;i++) {B[i]=A[size-i-1];}
          ans=amazingness(B,size);
          sum+=ans;
          }
}
    cout<<sum<<endl;
}
//system("pause");
return 0;
}
