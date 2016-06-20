#include<iostream>
 
using namespace std;
 
int check(long long H[],long long R[],int N,long long L,long long x){
 long long total = 0,curr;
 for (int i=0;i<N;i++){ 
  curr = H[i] + x * R[i]; 
       if (curr >=L) 
          total += curr;
  }
  return total;
  }
 
int main(){
    int N;
    long long W,L;
    cin>>N>>W>>L;
    long long H[N],R[N];
    for(int i=0;i<N;i++){
            cin>>H[i]>>R[i];
            }
    int ans;
    double count1=1,count=1;
    long long x=1;
    if(W<=1e4){               
            while(1){
                     ans=check(H,R,N,L,x);
                     if(ans>=W){
                                break;
                                }
                     else if(count1>W){
                          break;
                          }
                     ++count;
                     ++count1;
                     x++;
            }
        }
    else{
         double mid,beg,end;
         long long x1; 
        beg = 0;
        end = 1e18;
        while (beg <= end){
              mid = (beg + end) / 2;
              x1=check(H,R,N,L,mid);
              if(x1>=W){ 
              end = mid;
              }
             else{ 
             beg = mid + 1;
             }
        }
        count=beg-1;
    }
    cout<<count;
    system("pause");
    return 0;
    }
