#include<iostream>
#define n 100111  

using namespace std;

int N;
long long W,L,H[n],R[n];
double beg,end,mid;

int check(double ans){
 long long total = 0,curr;
 for (int i=0;i<N;i++){ 
  curr = H[i] + ans * R[i]; 
       if (curr >=L) 
          total += curr;
  }
  return total>=W;
    }

int main(){
    cin>>N>>W>>L;
    for(int i=0;i<N;i++){
            cin>>H[i]>>R[i];
            }
    beg=0;
    end=1e18;
    while(end-beg>1){
          mid=(beg+end)/2;
          if(check(mid))
             end=mid;
          else
                beg=mid;
    }
    cout<<(floor)end;
    system("pause");
    return 0;
}
