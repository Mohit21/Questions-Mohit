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
            val=val^a[j];
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
             int B[1];
             for(int i=L;i<=R;i++){
                      B[0]=i;
                      ans=amazingness(B,1);
                      sum+=ans;           
                       }
             }
    else{
         int size=0,k,a;
         size=NumDigits(R);
         int A[size];
         for(int i=L;i<=R;i++){
          N=i;
          k=1;
          while(N!=0){
                      A[size-k]=N%10;
                      k++;
                      N/=10;
                      }
          ans=amazingness(A,size);
          sum+=ans;      
          }
    }
    cout<<sum<<endl;
}
system("pause");
return 0;
}
